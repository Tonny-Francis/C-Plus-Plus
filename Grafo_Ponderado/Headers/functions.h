#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

//Gerencia os dados do arquivo.txt
void GerenciaDados ();
//Passa o primeiro vertice
vector <string> GetVertice_1 ();
//Passa o segundo vertice
vector <string> GetVertice_2 ();
//Passa Arestas
vector <float> GetAresta ();
void Delay (int i);
//Menu de opções
void Menu ();