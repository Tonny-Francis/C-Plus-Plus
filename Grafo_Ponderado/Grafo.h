#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
class Grafo
{
    private:
    string vertice_1;
    string vertice_2;
    float peso;

    public:
    //Define o peso nas arestas
    void setVertices (string _vertice_1, string _vertice_2, string _peso);

};

class Vertice
{
    private:
    vector <string> vertice_1;
    vector <string> vertice_2;
    
    public:
    //Armazena os vertices lidos do arquivo.txt no vector
    void setVertices (string _vertice_1, string _vertice_2);
};

class Aresta 
{
    private:
    string origem;
    string destino;

    public:
    //Construtor que define o ponto de origem e destino 
    Aresta(string _origem, string _destino );

};
