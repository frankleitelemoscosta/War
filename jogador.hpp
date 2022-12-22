#ifndef __JOGADOR_HPP
#define __JOGADOR_HPP

//bibliotecas
    #include <string>
    #include <vector>
    #include "paises.hpp"
//fim bibliotecas

using namespace std;

class Jogador
{
private:

    string nome, objetivo;
    vector<string> cartas;
    unsigned int tropas;
    vector<Paises> paises;

    //fim dos atributos
public:
    Jogador(string nome, string objetivo, unsigned int tropas, vector<string> cartas);
    Jogador();

    void setNome(string nome);
    string getNome();

    void setObjetivo(string objetivo);
    string getObjetivo();

    void setCartas(vector<string> cartas);
    vector<string> getCartas();

    void setTropas(unsigned int tropas);
    unsigned int getTropas();

    void setPaises(vector<Paises> paises);
    vector<Paises> getPaises();

    void aloc_tropas();
    void atacar();
    void realoc_tropas();
    void compra_cartas();
    
    //fim dos métodos
};
#endif