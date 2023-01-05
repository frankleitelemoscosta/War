//bibliotecas
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/jogador.hpp"
    #include<iostream>
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


//fim do código