#ifndef __PAISES_HPP
#define __PAISES_HPP
#include <string>
#include <vector>

using namespace std;

class Paises
{
private:
    string nome;
    unsigned int tropas;
    vector<string>fronteiras;
public:
    Paises(string nome,unsigned int tropas,vector<string>fornteira);
    Paises();

    void setNome(string nome);
    string getNome();

    void setTropas(unsigned int tropas);
    unsigned int getTropas();

    void setFronteiras(vector<string>fronteira);
    vector<string> getFronteiras();
};
#endif