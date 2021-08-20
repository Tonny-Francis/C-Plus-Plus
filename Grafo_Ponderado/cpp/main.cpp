#include "class.h"
#include "functions.h"
int _Menu = 0;


int main()
{
    //Inicializando a class Grafo_1
    Grafo Grafo_1;
    Grafo_1.GerenciaDados();

    //Recebe a opção desejada e executa o menu de opções
    _Menu = Opcoes();
    
    //Seleção do menu de acordo com a variavel _Menu
    switch(_Menu)
    {
        case 1:
            case_1();

        
            break;
        case 2:
            Limpa_Tela();
            Grafo_1.ListaVertices();


            break;
        case 3:
            case_3();
        
            break;
        case 4:
            case_4();
            break;
        case 5:
            case_5();

            break;
        case 6:
            case_6();
        
            break;
    
        default:
            default_1();
            return main();
        
            break;
    }

    return 0;
}