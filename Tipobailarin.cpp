#include "Tipobailarin.h"

//Cargar tipobailarin
void cargatipobailarin (tipobailarin &a)
{
    char opcion;
    do
    {
        fflush(stdin);
        printf("\nIngrese una opcion para el tipo de bailarin: i = INFANTIL /  j = JUVENIL / a = ADULTO");
        printf("\nOpcion: ");
        scanf("%c", &opcion);

        //Por si la persona tiene el teclado en mayuscula
        if(opcion == 'I' || opcion == 'J' || opcion == 'A')
        {
            opcion = opcion + 32;
        }

        switch(opcion)
        {
            case 'i': a = INFANTIL;
                        break;

            case 'j': a = JUVENIL;
                        break;

            case 'a': a = ADULTO;
                        break;
        }
    }
    while(opcion != 'i' && opcion != 'j' && opcion != 'a');
}

//Muestra el tipobailarin

void muestratipobailarin (tipobailarin b)
{
     switch(b)
    {
        case INFANTIL: printf("Infantil");
                        break;

        case JUVENIL: printf("Juvenil");
                        break;

        case ADULTO: printf("Adulto");
                        break;
    }
}
