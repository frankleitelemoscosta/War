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
    
//fim dos atributos

public:
    Paises(string nome);
    Paises();

    void setNome(string nome);
    string getNome();

    void setTropas(vector<Tropas> tropas);
    vector<Tropas> getTropas();
//fim dos métodos

};
#endif


//fim do código