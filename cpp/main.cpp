//bibliotecas
    #include <iostream>
    #include <string>
    #include <vector>
    #include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/paises.hpp"
//fim das bibliotecas

using namespace std;

int main()
{

    //variaveis locais
        int numero_de_jogadores,   error;
        string *vetor;
    //fim das variaveis locais
    
    cout<<"Quantos serão os jogadores?"<<endl;
    
    //tratamento de excessão do imput do numero de jogadores
        do{
            error = 0;
            cin>>numero_de_jogadores;
            if(cin.fail())
            {
                error = 1;
                cout<<"Digite um inteiro válido"<<endl;
                cin.clear();
                cin.ignore();
            }
        }while(error == 1);
    //fim

    vetor = new string[numero_de_jogadores];


    for(int i = 0 ; i < numero_de_jogadores ; i++)
    {
        cin.clear();
        cin.ignore();
        cout<<"Qual o nome do jogador "<<i + 1<<" ?"<<endl;
        getline(cin,vetor[i]);
    }

    return 0;
}