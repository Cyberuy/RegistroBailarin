#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED
#include "Bailarin.h"

const int TAM =30;
typedef struct{
                bailarin arre [TAM] ;
                int tope;
        }Arrebailarin;


//Obtener posicion de bailarin
//PRECONDICION: El bailarin existe
int obtenerposicionbailarin(Arrebailarin a, int ced) ;

//inicializar arreglo
void inicializar (Arrebailarin &a);

//muestra del arreglo bailarin
void muestrmuestra (Arrebailarin b);

//Determinar si un bailarin existe e partir de una cedula
boolean existebailarin (Arrebailarin c,int ced);

//Hora de ingreso del ultimo bailarin
Hora ultimoingreso (Arrebailarin d);

//Verificar si hay espacio
boolean cupo (Arrebailarin e);

//Ingresar nuevo bailarin
//PRECONDICION: verificar que el arreglo tenga espacio
//PRECONDICION: El bailarin fue cargado
void ingreso (Arrebailarin &f, bailarin b);

//Dar salida a un bailarin
//PRECONDICION: Verificar que exista la cedula
void salida (Arrebailarin &g, int ced);

//Listar por pantalla todos los bailarines y por orden de llegada
void listartodos (Arrebailarin h);

//listar por cedula datos de un bailarin
//PRECONDICION: Verificar que la cedula existe
void listaruno (Arrebailarin i, int ced);

//Devolver cantidad de bailarines por tipo
void cantipos (Arrebailarin j, int &inf, int &ju, int &ad);

//Cantidad de bailarines por fecha
int  cantnacido (Arrebailarin k, Fecha a);

//Por cedula aumentar en uno  los premios de infantil
void  maspremios (Arrebailarin &l, int ced);

//mostrar bailarines que superen determinada cantidad de premios
void superapremio (Arrebailarin m, int num);


#endif // MUESTRA_H_INCLUDED
