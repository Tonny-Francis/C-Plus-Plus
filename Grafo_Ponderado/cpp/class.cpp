#include "class.h"

//Variaveis
//Vector que vai receber os primeiros vertices
vector <string> _Auxiliar_1;
//Vector que vai receber os segundos vertices
vector <string> _Auxiliar_2;
//Vector que vai receber as arestas
vector <float> _Auxiliar_3;

//Definições da Classe Grafo
void Grafo::setGrafo()
{
    _Vertice_1 = _Auxiliar_1;
    _Vertice_2 = _Auxiliar_2;
    _Arestas = _Auxiliar_3;
}
void Grafo::GerenciaDados()
{
    //Variavel que recebe os tamanhos das linhas
    int tam = 0;
    //Vector que vai receber os dados do arquivo.txt
    vector <string> _Linhas;
    //Vector auxiliar
    vector<string> _Auxiliar_0;
    //Variavel auxiliar
    string Auxiliar;
    //Inicializando um arquivo do tipo ifstream
    ifstream Dados;
    //Fazendo a abertura do arquivo
    Dados.open("Arestas_Vertices_Pesos.txt");
    //Verifica se o arquivo foi aberto
    if(Dados.is_open())
    {
        //Passa linha por linha para o vector linha
        while(getline(Dados, Auxiliar))
        {
            _Linhas.push_back(Auxiliar);
        }
        //Feacha o arquivo.txt
        Dados.close();
    }
    else
    {
        //Mostra uma mensagem de erro caso tenha algum problema com arquivo.txt
        cout << "Não foi possivel abrir o arquivo.txt" << endl;
    }

    //Laço responsavel por extrair cada dado de uma linha
    for (int i = 0; i < _Linhas.size(); i++)
    {
        //Passa o primeiro vetice para o vector vertice
        tam = _Linhas[i].find(" ");
        _Auxiliar_1.push_back( _Linhas[i].substr(0, tam));
        
        //Passando o segundo vertice para o vector vertice
        tam = tam +1;
        _Auxiliar_0.push_back(_Linhas[i].substr(tam, _Linhas[i].size()));
        tam = _Auxiliar_0[i].find(" ");
        _Auxiliar_2.push_back( _Auxiliar_0[i].substr(0, tam));
        
        //Passando a aresta  para o vector Arestas e convertendo para float
        tam = tam + 1;
        _Auxiliar_3.push_back(stof(_Auxiliar_0[i].substr(tam, _Auxiliar_0[i].size())));
    }

    setGrafo();
}
//Lista de Vertices
void Grafo::ListaVertices()
{   
    cout << setw(50) << setfill('-') << "\n";
    
    for(int k = 0; k < _Auxiliar_1.size(); k++)
    {
        cout << k+1<< "° "<< _Auxiliar_1[k] << " " << "-->" << " " << _Auxiliar_2[k] << endl;
    }

    cout << setw(50) << setfill('-') << "\n";
}
//Muda os valores das arestas
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