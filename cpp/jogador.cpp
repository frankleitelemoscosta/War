//bibliotecas
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/jogador.hpp"
    #include<iostream>
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/tropas.hpp"
//fim das bibliotecas

using namespace std;

Jogador::Jogador(string nome, string objetivo, unsigned int tropas, vector<string> cartas)
{
    this->nome = nome;
    this->objetivo = objetivo;
    this->tropas = tropas;
    this->cartas = cartas;
}

Jogador::Jogador()
{

}

void Jogador::setJogadores(vector<Jogador> jogadores)
{
    this->lista_jogadores = jogadores;
}

vector<Jogador> Jogador::getJogadores()
{
    return this->lista_jogadores;
}

void Jogador::setNome(string nome)
{
    this->nome = nome;
}

string Jogador::getNome()
{
    return this->nome;
}

void Jogador::setPaises(vector<Paises> paises)
{
    this->paises = paises;
}

vector<Paises> Jogador::getPaises()
{
    return this->paises;
}

void Jogador::Imprimir_participantes()
{

    for(int i = 0 ; i < this->lista_jogadores.size() ; i++)
    {
        cout<<endl<<"Nome: "<<this->lista_jogadores[i].getNome()<<endl<<endl;

        cout<<"Paises desse jogador: "<<endl<<endl; 

        for(int j = 0 ; j < lista_jogadores[i].paises.size() ; j++)
        {

            cout<<","<<this->lista_jogadores[i].paises[j].getNome();
        
        }
    }
}

void Jogador::aloc_tropas(int quantidade_tropas, Tropas T)
{
    //variaveis locais
        string nome_do_pais;
        vector<Tropas> tropas;
        Jogador J;
        int total_tropas_ainda_disponiveis = quantidade_tropas;
        int quantidade_tropas_tipo2 = quantidade_tropas * 0.3;
        int quantidade_tropas_tipo1 = quantidade_tropas - quantidade_tropas_tipo2;
        int escolha, contador = 0, contador_aux = 0;
    //fim

    system("clear");

    while(total_tropas_ainda_disponiveis != 0)
    {

        contador_aux = 0;

        cout<<quantidade_tropas_tipo1<<endl;
        cout<<quantidade_tropas_tipo2<<endl;


        cout<<endl<<"Em qual pais você deseja colacar tropas, e quantas vai colocar "<<getNome()<<" ?"<<endl<<endl;

        cout<<"Esses são os paises onde você pode colocar suas "<<total_tropas_ainda_disponiveis<<" tropas"<<endl<<endl;

        //informativo ao usuário    
            for(int i = 0 ; i < this->paises.size() ; i ++)
            {

                cout<<this->paises[i].getNome()<<" ";
            
            }
        //fim

        cout<<endl;
        cout<<endl;

        cin.ignore();

        cout<<"Diga qual pais você deseja colocar tropas: "<<endl;
        getline(cin,nome_do_pais);

        cout<<"Diga agora o tipo de tropa você deseja colocar nesse pais, sendo do tipo 1: 500 homens, e do tipo 2: 4 tanks"<<endl;
        cin>>escolha;

        system("clear");

        //para encontrar o pais e alocar as tropas:   
            for(int i = 0 ; i < this->paises.size() ; i ++)
            {
                if(this->paises[i].getNome() == nome_do_pais)
                {

                    contador_aux++;

                    if(escolha == 1 && quantidade_tropas_tipo1 > 0)
                    {

                        T.setTipo(escolha);
                        tropas = this->paises[i].getTropas();
                        tropas.push_back(T);
                        this->paises[i].setTropas(tropas);
                        


                        tropas.clear();

                        quantidade_tropas_tipo1 = quantidade_tropas_tipo1 - 1;

                    }
                    else if(escolha == 1 && quantidade_tropas_tipo1 == 0)
                    {
                    
                        cout<<"você não pode mais alocar tropas desse tipo, pois não tem mais disponiveis, comece a alocar novamente"<<endl;
                    
                    }
                    
                    if(escolha == 2 && quantidade_tropas_tipo2 > 0)
                    {

                        T.setTipo(escolha);
                        tropas = this->paises[i].getTropas();
                        tropas.push_back(T);
                        this->paises[i].setTropas(tropas);
                        

                        tropas.clear();

                        quantidade_tropas_tipo2 = quantidade_tropas_tipo2 - 1;
                    
                    }
                    else if(escolha == 2 && quantidade_tropas_tipo2 == 0)
                    {
                    
                        cout<<"você não pode mais alocar tropas desse tipo, pois não tem mais disponiveis, comece a alocar novamente"<<endl;
                    
                    }
                }
            }
        //fim
        if(contador_aux > 0)
            total_tropas_ainda_disponiveis = total_tropas_ainda_disponiveis - 1;
    }
}

void Jogador::Consultar_tropas_e_paises()
{

    vector<Tropas> tropas;

    for(int i = 0 ; i < this->paises.size() ; i++)
    {

        cout<<this->paises[i].getNome();
        tropas = this->paises[i].getTropas();

            for(int j = 0 ; j < tropas.size() ; j++)
            {

                cout<<tropas[j].getTipo()<<"  ";
            
            }
            tropas.clear();//para limpar o vector assim que terminado as tropas de um pais
            cout<<endl;
    }
}

void Jogador::atacar()
{
    
}

//fim do código