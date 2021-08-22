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
    void GerenciaDados();
    //Numero de vertices e enlaces
    int Numero_vertices_enlaces();
    //Lista de vertices
    int ListaVertices();
    //Algoritmo de Dijkstra
    int Algoritmo_Diijkstra();
    //Metodo de inserção de arestas
    void InsercaoArestas(int _vertices, float _aresta);
    //Função menu e amiga da class Grafo
    friend int Menu(Grafo _Grafo);
    //Funçao voltar e amiga da class Grafo
    friend int Voltar(Grafo _Grafo);
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
    //Função menu e amiga da class Aresta
    friend int Menu(Grafo _Grafo, Aresta _Aresta);
    //Funçao voltar e amiga da class Grafo
    friend int Voltar(Grafo _Grafo, Aresta _Aresta);
};
