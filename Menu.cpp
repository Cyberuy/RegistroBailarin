#include "Menu.h"
#include <stdio.h>


//Mostrar menu principal y opciones
void menu (int &opcion)
{
    printf("\t----------------\n");
    printf("\t|MENU PRINCIPAL|\n");
    printf("\t----------------");
    printf("\n*****************************************");
    printf("\n*  1-Registrar ingreso de un bailarin   *");
    printf("\n*  2-Registrar salida de un bailarin    *");
    printf("\n*  3-Menu de listados y consultas       *");
    printf("\n*  4-Salir del programa                 *");
    printf("\n****************************************");
    printf("*\nOpcion: ");
    scanf("%d", &opcion);
}

//Mostrar menu secundario y opciones
void menusecundario (int &opcion)
{
    printf("\t------------------------------\n");
    printf("\t|MENU DE LISTADOS Y CONSULTAS|\n");
    printf("\t------------------------------\n");
    printf("\n*********************************************************************************************");
    printf("\n*   1. Listado de bailarines ingresados, ordenado por hora de llegada.                      *");
    printf("\n*   2. Listado detallado de un bailarin, dada su cedula.                                    *");
    printf("\n*   3. Cantidad de bailarines de cada tipo ingresados.                                      *");
    printf("\n*   4. Cantidad de bailarines ingresados nacidos en una fecha determinada.                  *");
    printf("\n*   5. Dada la cedula de un bailarin infantil, incrementar en 1 su cantidad de premios.     *");
    printf("\n*   6. Listado de bailarines infantiles que superan una cantidad de premios determinada.    *");
    printf("\n*   7. Salir del menu.                                                                      *");
    printf("\n*********************************************************************************************");
    printf("\nOpcion: ");
    scanf("%d", &opcion);

}

