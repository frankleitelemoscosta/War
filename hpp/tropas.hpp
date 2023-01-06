#ifndef __TROPAS_HPP
#define __TROPAS_HPP
#include <string>
#include <vector>

using namespace std;

class Tropas
{
private:
   
    int tipo;
    vector<Tropas> lista_Tropas;
//fim dos atributos

public:

    Tropas();

    void setTropas(vector<Tropas> tropas);
    vector<Tropas> getTropas();

    void setTipo(int nome);
    int getTipo();

//fim dos métodos
};
#endif

//fim do código