#include "class.h"
//Gerencia os dados do arquivo.txt
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
        //Fecha o arquivo.txt
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
        _Vertice_1.push_back( _Linhas[i].substr(0, tam));
        //Passando o segundo vertice para o vector vertice
        tam = tam +1;
        _Auxiliar_0.push_back(_Linhas[i].substr(tam, _Linhas[i].size()));
        tam = _Auxiliar_0[i].find(" ");
        _Vertice_2.push_back( _Auxiliar_0[i].substr(0, tam));
        //Passando a aresta  para o vector Arestas e convertendo para float
        tam = tam + 1;
        _Arestas.push_back(stof(_Auxiliar_0[i].substr(tam, _Auxiliar_0[i].size())));
    }
}
//Número de vertices e enlaces
int Grafo::Numero_vertices_enlaces()
{
    //Variavel auxiliar
    int N = 0;
    //Percorre todo o vector procurando por NA
    for(int z = 0; z < _Vertice_1.size(); z++)
    {
        if(_Vertice_1[z] == "NA")
            N++;
        if(_Vertice_2[z] == "NA")
            N++;
    }
    cout << "O Grafo possui " << _Vertice_1.size() << " vertices e " << _Vertice_1.size() - N << " enlaces" << endl;
    return 0;
}
//Lista de Vertices
int Grafo::ListaVertices()
{   
    cout << setw(50) << setfill('-') << "\n";
    
    for(int k = 0; k < _Vertice_1.size(); k++)
    {
        cout << k+1<< "° "<< _Vertice_1[k] << " " << "-->" << " " << _Vertice_2[k] << endl;
    }

    cout << setw(50) << setfill('-') << "\n";
    return 0;
}
//Algoritmo de Dijkstra
int Grafo::Algoritmo_Diijkstra()
{
    int Linha;
    int Coluna;
    string _Tabela[Linha][Coluna];
    vector <string> _Nos;
    vector <float> _Pesos;
    vector <string> _Rotulo;
    vector <string> _Valor;
    vector <string> _Auxiliar;
    bool loop;

    //Juntando todos os vertices em um unico vector
    for(int j = 0; j < _Vertice_1.size(); j++)
    {
        _Auxiliar.push_back(_Vertice_1[j]);
        _Auxiliar.push_back(_Vertice_2[j]);
    }

    //Removendo os nomes repetidos
    for(int l = 0; l < _Auxiliar.size(); l++)
    {
        loop = false;
        for(int g = 0; g < l; g++)
        {
            if(_Auxiliar[l] == _Auxiliar[g])
            {
                loop = true;
                break;
            }
        }
        if(loop == false)
        {
            _Nos.push_back(_Auxiliar[l]);
        }
    }
    //Determina a quantidade de colunas
    Coluna = _Nos.size() + 3;

    //Determina os vizinhos
    for()
    for(int q = 0; q < _Pesos.size(); q++)
    {
        cout << _Nos.size() << endl;
    }
    return 0;
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