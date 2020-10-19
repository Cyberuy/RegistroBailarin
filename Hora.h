#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include "Boolean.h"

typedef struct{
                int hrs;
                int minuto;
            }Hora;

//Cargar hora
void cargarhora (Hora &a);

//Muestra hora
void muestrahora (Hora b);

//Validar hora
boolean validarhora (Hora c);

//Determina si una hora es menor o mayor
boolean ordenhora (Hora e, Hora f);

//Comparar horas
boolean compararHoras(Hora hr1, Hora hr2);

//FUNCIONES SELECTORAS

//Devolver hora
int Darhrs (Hora c);

//Devolver minutos
int Darminutos (Hora d);





#endif // HORA_H_INCLUDED
