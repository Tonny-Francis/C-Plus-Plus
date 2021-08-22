#include "class.h"
#include "functions.h"
int _Menu = 0;
int main()
{
    //Instanciano Grafo_1
    Grafo Grafo_1;
    //Recebe o retorno da função menu
    _Menu = Menu();
    //Chama a função responsavel por gerenciar os dados do arquivo.txt
    GerenciaDados(Grafo_1);
    //Switch de seleção do menu
    switch(_Menu)
    {
        case 1:
            Limpa_Tela();
            Numero_vertices_enlaces(Grafo_1);

            break;
        case 2:
            Limpa_Tela();
            ListaVertices(Grafo_1);

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
            cout << setw(50) << setfill('-') << endl;
            cout << "Opção Invalida!!, Tente Novamente";
            cout << setw(50) << setfill('-') << endl;
            Delay(5);
            Limpa_Tela();
            return Menu();
            break;
    }
    return 0;
}