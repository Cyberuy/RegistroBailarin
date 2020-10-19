#ifndef JUVENIL_H_INCLUDED
#define JUVENIL_H_INCLUDED
#include "String.h"

typedef struct{
                String danza;
                boolean canta;
        }Juvenil;

//Cargar juvenil
void cargajuvenil (Juvenil &a);

//Muestra juvenil
void muestrajuvenil (Juvenil b);

//FUNCIONES SELECTORAS

//Devolver estilo de danza
void Dardanza (Juvenil c, String &c1);

//Devolver si canta
boolean Darcanta (Juvenil d);


#endif // JUVENIL_H_INCLUDED
