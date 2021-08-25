#include "functions.h"
#include "class.h"
int _Menu;
//Limpa Tela
void Limpa_Tela()
{
    #ifdef linux
    system("clear");
    #elif LINUX
    system("clear");
    #elif UNIX
    system("clear");
    #else
    system("cls");
    #endif
}
//Delay
void Delay(int i)
{
    #ifdef linux
    sleep(i);
    #elif LINUX
    sleep(i);
    #elif UNIX
    sleep(i);
    #else
    Sleep(i);
    #endif
}
//Menu de opcoes
int Menu(Grafo _Grafo, Aresta _Aresta)
{
    //Variavel que recebera a opção desejada
    _Menu = 0;
    //Menu de opcoes
    Limpa_Tela();
    cout << setw(50) << setfill('-') << "\n";
    cout << "1- Numero de Vertices e Enlaces" << endl;
    cout << "2- Lista de Vertices" << endl;
    cout << "3- Algoritmo de Diijkstra" << endl;
    cout << "4- Diametro do Grafo" << endl;
    cout << "5- Vertice com maior centralidade de grau" << endl;
    cout << "6- Vertice com maior centralidade de intermediação" << endl;
    cout << endl << "   Opcao: ";
    cin >> _Menu;
    cout << setw(50) << setfill('-') << "\n";

    switch(_Menu)
    {
        case 1:
            Limpa_Tela();
            _Grafo.Numero_vertices_enlaces();
            Voltar(_Grafo, _Aresta);

            break;
        case 2:
            Limpa_Tela();
            _Grafo.ListaVertices();
            Voltar(_Grafo, _Aresta);

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
            Limpa_Tela();
            cout << setw(50) << setfill('-') << "\n";
            cout << "Opção Invalida!!, Tente Novamente" << endl;
            cout << setw(50) << setfill('-') << "\n";
            Delay(3);
            Limpa_Tela();
            return Menu(_Grafo, _Aresta);
            break;
    }

    return 0;
}
//Retorna ao menu
int Voltar(Grafo _Grafo, Aresta _Aresta)
{
    string voltar;
    char n;
    cout << "Digite voltar para retornar ao menu" << endl;
    cin >> voltar;
    if(voltar == "voltar")
        return Menu(_Grafo, _Aresta);
    else
        Limpa_Tela();
        return Voltar(_Grafo, _Aresta);
    return 0;
}
//Função que descobre o vizinho mais de um ponto e o seu peso
vector <string> Vizinhos_Pesos(Grafo _Grafo, string Ponto)
{
    vector <string> _Vizinhos;

    //Determina os vizinhos de um vertice e os pesos
    for(int h = 0; h < _Grafo._Vertice_1.size(); h++)
    {
        if(_Grafo._Vertice_1[h] == Ponto)
        {
            _Vizinhos.push_back(_Grafo._Vertice_2[h]);
            _Vizinhos.push_back(_Grafo._Arestas[h]);
        }
        if(_Grafo._Vertice_2[h] == Ponto)
        {
            _Vizinhos.push_back(_Grafo._Vertice_1[h]);
            _Vizinhos.push_back(_Grafo._Arestas[h]);
        }
    }
    return _Vizinhos;
}
//Algoritmo de Dijkstra
int Algoritmo_Diijkstra(Grafo _Grafo, Aresta _Aresta_1)
{
    int tam = 0;
    int n = 0;
    int z = 0;
    vector <string> _Nos;
    vector <float> _Pesos;
    vector <string> _Rotulo;
    vector <string> _Valor;
    vector <string> _Auxiliar;
    vector <string> _Vizinhos;
    string Origem;
    #define Infinito 1000
    bool loop;

    //Juntando todos os vertices em um unico vector
    for(int j = 0; j < _Grafo.GetTam(); j++)
    {
        _Auxiliar.push_back(_Grafo.GetVertice_1(j));
        _Auxiliar.push_back(_Grafo.GetVertice_2(j));
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
    //
    _Auxiliar.clear();
    Origem = _Aresta_1.Origem;
    _Vizinhos = Vizinhos_Pesos(_Grafo, Origem);
    for(int k = 0; k < _Nos.size(); k++)
        _Valor.push_back("-");
    for(int r = 0; r < _Nos.size(); r++)
    {
        if(_Vizinhos[tam] == _Nos[z])
        {
            _Valor[z] = _Vizinhos[tam];
            tam = tam +2;
            z++;
        }
        else
            z++;     
        cout << _Valor[r] << endl; 
    }
    return 0;
}