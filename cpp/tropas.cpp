//bibliotecas
    #include<iostream>
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/tropas.hpp"  
//fim das bibliotecas

using namespace std;

Tropas::Tropas()
{
    
}

void Tropas::setTropas(vector<Tropas> tropas)
{
    this->lista_Tropas = tropas;
}

vector<Tropas> Tropas::getTropas()
{
    return this->lista_Tropas;
}

void Tropas::setTipo(int Tipo)
{
    this->tipo = Tipo;
}

int Tropas::getTipo()
{
    return this->tipo;
}
