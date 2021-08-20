#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

//Classes
class Grafo
{
    private:
    vector <string> _Vertice_1;
    vector <string> _Vertice_2;
    vector <float> _Arestas;

    public:
    //Define o peso nas arestas
    void setGrafo();
    //Metodo de Inserção de arestas
    void InsercaoArestas(int _vertices, float _aresta);
};

class Vertice
{
    private:
    vector <string> _Vertice_1;
    vector <string> _Vertice_2;
    
    public:
    //Armazena os vertices lidos do arquivo.txt no vector
    void setVertices(string _vertice_1, string _vertice_2);
};

class Aresta 
{
    private:
    string Origem;
    string Destino;

    public:
    //Construtor que define o ponto de origem e destino 
    Aresta(string _origem, string _destino);

};
