#ifndef NACIONALIDAD_H_INCLUDED
#define NACIONALIDAD_H_INCLUDED
#include <stdio.h>

typedef enum {URUGUAY,ARGENTINA,BRASIL,PARAGUAY,OTROS}nacionalidad;

//Cargar nacionalidad
void carganacionalidad (nacionalidad &a);

//Muestra nacionalidad
void muestranacionalidad ( nacionalidad b);




#endif // NACIONALIDAD_H_INCLUDED
