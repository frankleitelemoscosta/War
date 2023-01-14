//bibliotecas
    #include <iostream>
    #include <string>
    #include <vector>
    #include <random>
    #include <algorithm>
    #include <chrono>
    #include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/paises.hpp"
    #include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/jogador.hpp"
    #include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/tropas.hpp"
//fim das bibliotecas

using namespace std;

int main()
{

    //variaveis locais
        int numero_de_jogadores,   error;
        vector<Jogador> jogadores;
        Jogador J;
        Tropas T;
        vector<Tropas> tropas;
        string nome_jogador;
        string vet[45] = {"Brasil","Australia","Peru","Argentina","Venezuela","Alaska","North Africa","South Africa","Congo","India","China","Japao","Afeganistao","California","Nova york","Mexico","Makenzie","Groelandia","Espanha","Moscou","Vancouver","Ottawa","Bolivia","Chile","Madagascar","Alemanha","Egito","Italia","Polonia","Suecia","Inglaterra","Islandia","Labrador","Mongolia","Dudinka","Vladvostok","Vietna","Sumatra","Nova Guiné","Sudão","Tchita","Omsk","Sibéria","Aral","Borneo"};
        int  numero_de_paises_de_um_player = 0;
        vector<Paises> nome_pais ;
        Paises P;
        string nome_pais_escolha;
        vector<string> paises;
        int quantidade_tropas_player , tropas_iniciais = 1;
    //fim das variaveis locais
    
    cout<<"INICIALIZANDO O JOGO: "<<endl;
    cout<<"Quantos serão os jogadores?"<<endl;
    
    //tratamento de excessão do imput do número de jogadores
        do{
            error = 0;
            cin>>numero_de_jogadores;
            if(cin.fail())
            {

                error = 1;
                cout<<"Digite um inteiro válido"<<endl;
                cin.clear();//limpa o terminal
                cin.ignore();//impede que seja pulada o campo onde o usuário deve preencher

            }else if(numero_de_jogadores > 6)
            {

                cout<<"Não é possível ter mais de seis jogadores, redija a quantidade de participantes!"<<endl;

            }else if(numero_de_jogadores <= 2)
            {

                cout<<"É necessário ter ao menos 3 jogadores, redija a quantidade de participantes!"<<endl;
            
            }
        }while(error == 1 || numero_de_jogadores > 6 || numero_de_jogadores <= 2);
    //fim


    //imput dos nomes dos componentes
        for(int i = 0 ; i < numero_de_jogadores ; i++)
        {

            cin.clear();//limpa o terminal
            cin.ignore();//impede que seja pulada o campo onde o usuário deve preencher
            cout<<"Qual o nome do jogador "<<i + 1<<" ?"<<endl;
            cin>>nome_jogador;

            J.setNome(nome_jogador);

            jogadores.push_back(J);

            J.setJogadores(jogadores);
            
        }
    //fim

    //passando os paises para um vector, para que ele seja embaralhado 
        for(int i = 0 ; i < 45 ; i++)
        {
            nome_pais_escolha = vet[i];

            paises.push_back(nome_pais_escolha);
        }
    //fim

    //embaralhando o vector com os paises
        unsigned seed = std::chrono::system_clock::now()
                            .time_since_epoch()
                            .count();

        shuffle(paises.begin(),paises.end(),default_random_engine(seed));//embaralha o vector paises
    //fim

    //para distribuir os paises para os jogadores inicialmente

        numero_de_paises_de_um_player = 45 / numero_de_jogadores;//esta conta determina quantas intereções vão ser realizadas para que o jogador coloque seus exercitos

        for(int j = 0 ; j < numero_de_jogadores ; j ++)
        {
            for(int i = 0 ; i < numero_de_paises_de_um_player ; i++ )
            {

                nome_pais_escolha = paises.back();//pegando o nome do final

                paises.pop_back();//excluindo o ultimo nome

                //passando as informações iniciais para os paises dos jogadoress
                    T.setTipo(tropas_iniciais);

                    tropas.push_back(T);

                    P.setTropas(tropas);

                    tropas.clear();

                //fim    

                //passando informações iniciais para os jogadores
                    P.setNome(nome_pais_escolha);

                    nome_pais.push_back(P);

                    jogadores = J.getJogadores();

                    jogadores[j].setPaises(nome_pais);

                    J.setJogadores(jogadores);       
                //fim
            }
            nome_pais.clear();//limpa o vector nome pais antes da próxima interação
        }
    //fim
    
    //para que o programa saiba quantas tropas distribuir para um jogador

        quantidade_tropas_player = numero_de_paises_de_um_player / 2;    
    
    //fim
        
    //reiniciando o vector dos jogadores
        jogadores.clear();

        jogadores = J.getJogadores();
    //fim

    //fazendo os jogadores distribuirem suas tropas    
        for(int i = 0 ; i < numero_de_jogadores ; i ++)
        {
            cout<<("Determine onde as suas tropas ficaram: ")<<jogadores[i].getNome()<<endl<<endl;

            jogadores[i].aloc_tropas(quantidade_tropas_player,T);
        }
    //fim

    for(int i = 0 ; i < numero_de_jogadores ; i ++)jogadores[i].Consultar_tropas_e_paises();

    return 0;
}

//fim do código