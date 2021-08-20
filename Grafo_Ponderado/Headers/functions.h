#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

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

//Funções do Menu
int Opcoes();
void case_1();
void case_2();
void case_3();
void case_4();
void case_5();
void case_6();
void default_1();