//bibliotecas
    #include"/home/frank/Documentos/PROJETOS FORA DA FACUL/WAR/hpp/jogador.hpp"
//fim das bibliotecas

Jogador::Jogador(string nome, string objetivo, unsigned int tropas, vector<string> cartas)
{
    this->nome = nome;
    this->objetivo = objetivo;
    this->tropas = tropas;
    this->cartas = cartas;
}

Jogador::Jogador()
{

}

