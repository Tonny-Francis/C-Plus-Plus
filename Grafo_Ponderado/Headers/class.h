#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include "functions.h"

using namespace std;

//Classes
class Grafo
{
    private:
    vector <string> _Vertice_1;
    vector <string> _Vertice_2;
    vector <float> _Arestas;
    
    public:
    //Gerencia os dados do arquivo.txt
    friend void GerenciaDados(Grafo &pos);
    //Numero de vertices e enlaces
    friend int Numero_vertices_enlaces(Grafo &pos);
    //Lista de vertices
    friend int ListaVertices(Grafo &pos);
    //Algoritmo de Dijkstra
    friend int Algoritmo_Diijkstra(Grafo &pos);
    //Metodo de inserção de arestas
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
