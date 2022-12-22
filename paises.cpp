#include "paises.hpp"
using namespace std;

Paises::Paises(string nome, unsigned int tropas, vector<string>fronteiras)
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

void Paises::setTropas(unsigned int tropas)
{
    this->tropas = tropas;
}
unsigned int Paises::getTropas()
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