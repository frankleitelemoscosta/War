#include "/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/paises.hpp"
using namespace std;

Paises::Paises(string nome, vector<Tropas> tropas, vector<string>fronteiras)
{
    setNome(nome);
    setTropas(tropas);
    setFronteiras(fronteiras);
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

void Paises::setFronteiras(vector<string>fronteiras)
{
    this->fronteiras = fronteiras;
}
vector<string> Paises::getFronteiras()
{
    return this->fronteiras;
}