//bibliotecas
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/mundo.hpp"
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/paises.hpp"
//fim bibliotecas

Mundo::Mundo(vector<Paises> paises)//construtor
{
    this->paises = paises;
}

Mundo::Mundo()//construtor
{

}

void Mundo::setPaises(vector<Paises> pais)
{
    this->paises = pais;
}

vector<Paises> Mundo::getPaises()
{
    return this->paises;
}

//fim do código