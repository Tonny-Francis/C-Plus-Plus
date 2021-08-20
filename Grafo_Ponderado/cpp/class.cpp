#include "class.h"
#include "functions.h"

//Definições da Classe Grafo
void Grafo::setGrafo()
{
    _Vertice_1 = GetVertice_1();
    _Vertice_2 = GetVertice_2();
    _Arestas = GetAresta();
}
void Grafo::InsercaoArestas(int _posicao, float _aresta)
{
    _Arestas[_posicao] = _aresta;
}

//Definições da Class Aresta
Aresta::Aresta(string _origem, string _destino)
{
    Origem = _origem;
    Destino = _destino;
}