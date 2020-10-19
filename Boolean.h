#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED
#include <stdio.h>

typedef enum {FALSE,TRUE}boolean;
//Carga la opcion de usuario
void cargabool(boolean &c);
//Muestra el valor booleano por pantalla
void desplega(boolean c);



#endif // BOOLEAN_H_INCLUDED
