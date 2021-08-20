#include "functions.h"

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
//Gerencia os dados do arquivo.txt

//Funções do menu
int Opcoes()
{
    int Menu = 0;
    Limpa_Tela();
    cout << setw(50) << setfill('-') << "\n";
    cout << "1- Numero de Vertices e Enlaces" << endl;
    cout << "2- Lista de Vertices" << endl;
    cout << "3- Algoritmo de Diijkstra" << endl;
    cout << "4- Diametro do Grafo" << endl;
    cout << "5- Vertice com maior centralidade de grau" << endl;
    cout << "6- Vertice com maior centralidade de intermediação" << endl;
    cout << endl << "   Opcao: ";
    cin >> Menu;
    cout << setw(50) << setfill('-') << "\n";
    return Menu;
}
void case_1()
{

}
void case_2()
{

}
void case_3()
{

}
void case_4()
{
    
}
void case_5()
{

}
void case_6()
{

}
void default_1()
{
    cout << setw(50) << setfill('-') << endl;
    cout << "Opção Invalida!!, Tente Novamente";
    cout << setw(50) << setfill('-') << endl;
    Delay(5);
    Limpa_Tela();
}