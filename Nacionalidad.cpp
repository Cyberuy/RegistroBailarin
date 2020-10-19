#include "Nacionalidad.h"

//Cargar nacionalidad
void carganacionalidad (nacionalidad &a)
{
    char opcion;

    do
    {
        fflush(stdin);
        printf("\nIngrese una opcion para la nacionalidad: u = URUGUAY  /  a = ARGENTINA  /  b = BRASIL  /  p = PARAGUAY  /  o = OTROS");
        printf("\nOpcion: ");
        scanf("%c", &opcion);

        //Por si la persona tiene el teclado en mayuscula
        if(opcion == 'U' || opcion == 'A' || opcion == 'B' || opcion == 'P' || opcion == 'O')
        {
            opcion = opcion + 32;
        }

        switch(opcion)
        {
            case 'u': a =URUGUAY;
                        break;

            case 'a': a = ARGENTINA;
                        break;

            case 'b': a = BRASIL;
                        break;

            case 'p': a = PARAGUAY;
                        break;

            case 'o': a = OTROS;
                        break;

            default: printf("\nLa opcion es incorrecta: ");
        }
    }
    while(opcion != 'u' && opcion != 'a' && opcion != 'b' && opcion != 'p' && opcion != 'o');
}

//Muestra nacionalidad
void muestranacionalidad ( nacionalidad b)
{
     switch(b)
    {
        case URUGUAY: printf("Uruguay");
                        break;

        case ARGENTINA: printf("Argentina");
                        break;

        case BRASIL:    printf("Brasil");
                        break;

        case PARAGUAY: printf("Paraguay");
                        break;

        default: printf("Otros");
    }
}
