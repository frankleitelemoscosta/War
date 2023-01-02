#ifndef __MUNDO_HPP
#define __MUNDO_HPP

//bibliotecas
    #include<vector>
    #include"paises.hpp"
    #include<iostream>
//fim bibliotecas

using namespace std;

class Mundo
{
private:

    vector<Paises> paises;

    //fim dos atributos 
public:
    Mundo(vector<Paises> paises);
    Mundo();

    void setPaises(vector<Paises> paises);
    vector<Paises> getPaises();
    
    //fim dos métodos
};

#endif