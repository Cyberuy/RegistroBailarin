#include "Boolean.h"
void cargabool(boolean &c)
{
    fflush(stdin);
    char opc;
    do
    {
        fflush(stdin);
        printf("\nIngrese una opcion: f = FALSE / t = TRUE");
        printf("\nOpcion: ");
        scanf("%c", &opc);

        switch(opc)
        {
            case 'f': case 'F': c = FALSE;
                                break;

            case 't': case 'T': c = TRUE;
                                break;
            default:
                      printf("\nLa opcion seleccionadad es incorrecta");
        }
    }
    while(opc != 'f' && opc != 'F' && opc != 't' && opc != 'T');
}

void desplega(boolean c)
{
    if(c == FALSE)
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE");
    }
}
