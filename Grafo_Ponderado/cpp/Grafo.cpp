#include "Grafo.h"

//Variaveis
//Vector que vai receber os vertices
vector <string> _Vertices;
//Vector que vai receber as arestas
vector <float> _Arestas;

//Funções
void GerenciaDados()
{
    //Variavel que recebe os tamanhos das linhas
    int tam = 0;
    //Vector que vai receber os dados do arquivo.txt
    vector <string> _Linhas;
    //Vector auxiliar
    vector<string> _Auxiliar;
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

    for (int i = 0; i < _Linhas.size(); i++)
    {
       //Passa o primeiro vetice para o vector vertice
        tam = _Linhas[i].find(" ");
        _Vertices.push_back( _Linhas[i].substr(0, tam));
        //Passando o segundo vertice para o vector vertice
        tam = tam +1;
        _Auxiliar.push_back(_Linhas[i].substr(tam, _Linhas[i].size()));
        tam = _Auxiliar[i].find(" ");
        _Vertices.push_back( _Auxiliar[i].substr(0, tam));
        //Passando a aresta  para o vector Arestas e convertendo para float
        tam = tam + 1;
        _Arestas.push_back(stof(_Auxiliar[i].substr(tam, _Auxiliar[i].size())));
    }
    cout << "teste";
}