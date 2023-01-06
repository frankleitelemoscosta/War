//bibliotecas
    #include <iostream>
    #include <string>
    #include <vector>
    #include <random>
    #include <algorithm>
    #include <chrono>
    #include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/paises.hpp"
    #include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/jogador.hpp"
//fim das bibliotecas

using namespace std;

int main()
{

    //variaveis locais
        int numero_de_jogadores,   error;
        string *vetor;
        vector<Jogador> jogadores;
        Jogador J;
        string nome_jogador;
        string vet[40] = {"Brasil","Australia","Peru","Argentina","Venezuela","Alaska","North Africa","South Africa","Congo","India","China","Japao","Afeganistao","California","Nova york","Mexico","Makenzie","Groelandia","Espanha","Moscou","Vancouver","Ottawa","Bolivia","Chile"};
        int  numero_de_paises_de_um_player = 0;
        int escolha_aux[40], escolha;
        vector<Paises> nome_pais ;
        Paises P;
        string nome_pais_escolha;
        vector<string> paises;
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

    //alocação de memória
        vetor = new string[numero_de_jogadores];
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
        for(int i = 0 ; i < 24 ; i++)
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

        numero_de_paises_de_um_player = 24 / numero_de_jogadores;//esta conta determina quantas intereções vão ser realizadas para que o jogador coloque seus exercitos

        for(int j = 0 ; j < numero_de_jogadores ; j ++)
        {
            for(int i = 0 ; i < numero_de_paises_de_um_player ; i++ )
            {

                nome_pais_escolha = paises.back();//pegando o nome do final

                paises.pop_back();//excluindo o ultimo nome

                P.setNome(nome_pais_escolha);

                nome_pais.push_back(P);

                jogadores = J.getJogadores();

                jogadores[j].setPaises(nome_pais);

                J.setJogadores(jogadores);       
            }
            nome_pais.clear();
        }

        J.Imprimir_participantes();

    return 0;
}

//fim do código