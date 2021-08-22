#include "functions.h"
#include "class.h"

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
int Menu()
{
    //Variavel que recebera a opção desejada
    int _Menu = 0;
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
    return _Menu;
}
//Retorna ao menu
int Voltar()
{
    string voltar;
    char n;
    cout << "Digite voltar para retornar ao menu" << endl;
    cin >> voltar;
    if(voltar == "voltar")
        return Menu();
    else
        Limpa_Tela();
        return Voltar();

    return 0;
}