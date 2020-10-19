#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include "Boolean.h"

typedef struct {
                               int  Dia;
                               int Mes;
                               int  Anio;
}Fecha;

//Cargar fecha dia, mes y anio
void cargafecha( Fecha &a);

//Mostrar fecha
void muestrafecha ( Fecha b);

//Devolver dia
int Dardia (Fecha c);

//Devolver mes
int Darmes ( Fecha d);

//Devolver anio
int Daranio ( Fecha e);

//Validar fecha
boolean  fechavalida (Fecha f);

//Comparar fechas
boolean fechasiguales(Fecha a,Fecha b);



#endif // FECHA_H_INCLUDED
