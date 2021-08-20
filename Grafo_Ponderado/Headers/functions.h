#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#ifdef linux
    #include <unistd.h>
#elif LINUX
    #include <unistd.h>
#elif UNIX
    #include <unistd.h>
#else
    #include <windows.h>
#endif

using namespace std;

//Limpa Tela
void Limpa_Tela();

//Delay
void Delay(int i);

//Gerencia os dados do arquivo.txt
void GerenciaDados();

//Passa o primeiro vertice
vector <string> GetVertice_1();

//Passa o segundo vertice
vector <string> GetVertice_2();

//Passa Arestas
vector <float> GetAresta();

//Menu de opções
void Menu();