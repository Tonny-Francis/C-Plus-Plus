#include "functions.h"
#include "class.h"
#include <time.h>

//Variaveis
//Vector que vai receber os primeiros vertices
vector <string> _Vertice_1;
//Vector que vai receber os segundos vertices
vector <string> _Vertice_2;
//Vector que vai receber as arestas
vector <float> _Arestas;

//Gerencia os dados do arquivo.txt
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

    //Laço responsavel por extrair cada dado de uma linha
    for (int i = 0; i < _Linhas.size(); i++)
    {
        //Passa o primeiro vetice para o vector vertice
        tam = _Linhas[i].find(" ");
        _Vertice_1.push_back( _Linhas[i].substr(0, tam));
        
        //Passando o segundo vertice para o vector vertice
        tam = tam +1;
        _Auxiliar.push_back(_Linhas[i].substr(tam, _Linhas[i].size()));
        tam = _Auxiliar[i].find(" ");
        _Vertice_2.push_back( _Auxiliar[i].substr(0, tam));
        
        //Passando a aresta  para o vector Arestas e convertendo para float
        tam = tam + 1;
        _Arestas.push_back(stof(_Auxiliar[i].substr(tam, _Auxiliar[i].size())));
    }
}

//Passa o primeiro vertice
vector <string> GetVertice_1 ()
{
    return _Vertice_1;
}

//Passa o segundo vertice
vector <string> GetVertice_2 ()
{
    return _Vertice_2;
}

//Passando arestas
vector <float> GetAresta ()
{
    return _Arestas;
}

//Delay
void Delay (int i)
{
    //Passa de segundos para milisegundos
    int M = 1000 * i;

    //Armazena a hora de inicio
    clock_t Tempo_de_Inicio = clock();
    //loop até que o tempo necessario seje alcançado
    while (clock() < Tempo_de_Inicio + M);
}

//Menu de opções
void Menu ()
{
    int Menu = 0;

    switch (Menu)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    
    default:
        cout << "Opção Invalida!!, Tente Novamente";
        Delay(3);
        break;
    }
}