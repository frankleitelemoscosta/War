//bibliotecas
    #include <iostream>
    #include <string>
    #include <vector>
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

    J.Imprimir_participantes();

    return 0;
}

//fim do código