#include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/paises.hpp"
using namespace std;

Paises::Paises(string nome )
{
    setNome(nome);
}
Paises::Paises(){}

void Paises::setNome(string nome)
{
    this->nome = nome;
}
string Paises::getNome()
{
    return this->nome;
}

void Paises::setTropas(vector<Tropas> tropas)
{
    this->tropas = tropas;
}
vector<Tropas> Paises::getTropas()
{
    return this->tropas;
}