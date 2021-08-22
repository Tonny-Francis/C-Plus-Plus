#include "class.h"
#include "functions.h"
int main()
{
    //Instanciano Grafo_1
    Grafo Grafo_1;
    Aresta Aresta_1("b", "b");
    Grafo_1.GerenciaDados();
    //Recebe o retorno da função menu
    Menu(Grafo_1, Aresta_1);
    
    return 0;
}