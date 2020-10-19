#include "Muestra.h"
#include "Menu.h"


int main()
{
    system("color 17");
    Arrebailarin a;
    inicializar(a);
    bailarin b;
    int premios = 3;
    int opcion;
    int opcion2;

    do
    {
        opcion2 = 0;
        system("cls");
        menu(opcion);
        switch(opcion)
        {
            case 1:
                {
                      int i = 0;
                      boolean seguir = TRUE;

                      if(cupo(a))
                      {
                          while(seguir == TRUE)
                          {
                              fflush(stdin);
                              cargabailarin(b);
                              ingreso(a, b);
                              i++;
                              printf("\nDesea ingresar otro bailarin?");
                              cargabool(seguir);
                          }
                      }
                      else
                      {
                          printf("\nNo hay cupos disponibles");
                      }
                }
                      break;

            case 2:     int ced;
                        printf ("\nIngrese cedula del bailarin a eliminar: ");
                        scanf("%d", &ced);
                        if (existebailarin(a, ced))
                          {
                                 salida(a, ced);
                          }
                        else
                          {
                               printf("\nLa cedula ingresada no existe");
                          }
                        break;

            case 3:
                        do
                        {
                            system("cls");
                            menusecundario(opcion2);
                            switch(opcion2)
                            {
                                case 1:
                                        listartodos(a);
                                        break;

                                case 2:
                                        int ced1;
                                        printf("ingrese cedula del bailarin a mostrar: ");
                                        scanf("%d", &ced1);

                                        if(existebailarin(a, ced1))
                                        {
                                            listaruno(a, ced1);
                                        }
                                        else
                                        {
                                            printf("\nLa cedula ingresada no existe");
                                        }
                                        break;

                                case 3:
                                        int in,ju,ad;
                                        cantipos(a,in,ju,ad);
                                        printf("\nLa cantidad de bailarines por categoria es:\nInfantil = %d\nJuvenil = %d\nAdulto = %d",in,ju,ad);
                                        break;

                                case 4:
                                        Fecha fech;
                                        printf("\nIngrese una fecha para saber cuantos bailarines cumplen el mismo dia: ");
                                        cargafecha(fech);
                                        printf("\nLa cantidad de bailarines nacidos el  ");
                                        muestrafecha(fech);
                                        printf("es: %d",cantnacido(a, fech));
                                        break;

                                case 5:
                                        int ced2;
                                        printf("\ningrese cedula de un bailarin infantil para sumarle un premio : ");
                                        scanf("%d", &ced2);
                                        if(existebailarin(a, ced2))
                                        {
                                             maspremios(a, ced2);
                                        }
                                        break;

                                case 6:
                                        printf("\nLos bailarines que superan el limite de premios son: ");
                                        superapremio(a, premios);
                                        break;

                                case 7:
                                        break;

                                default:
                                printf("\nERROR: Ingrese un numero entre 1 - 7\n");
                            }

                        printf("\n");
                        system("pause");

                        }
                        while(opcion2 != 7);
        case 4:
                break;

        default:
                printf("\nERROR: Ingrese un numero entre 1 - 4\n");
        }

        if(opcion2 != 7)
        {
            printf("\n");
            system("pause");
        }

   }
   while(opcion != 4);


    return 0;
}
