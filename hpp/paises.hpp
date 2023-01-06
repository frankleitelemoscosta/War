#ifndef __PAISES_HPP
#define __PAISES_HPP

//bibliotecas
    #include <string>
    #include <vector>
    #include "tropas.hpp"
//fim

using namespace std;

class Paises
{
private:

    string nome;
    vector<Tropas> tropas;
    vector<string>fronteiras;
//fim dos atributos

public:
    Paises(string nome,vector<Tropas> tropas,vector<string>fornteira);
    Paises();

    void setNome(string nome);
    string getNome();

    void setTropas(vector<Tropas> tropas);
    vector<Tropas> getTropas();

    void setFronteiras(vector<string>fronteira);
    vector<string> getFronteiras();
//fim dos métodos

};
#endif


//fim do código