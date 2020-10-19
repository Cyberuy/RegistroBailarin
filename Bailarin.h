#ifndef BAILARIN_H_INCLUDED
#define BAILARIN_H_INCLUDED
#include "Nacionalidad.h"
#include "Juvenil.h"
#include "Tipobailarin.h"
#include "Fecha.h"
#include "Hora.h"
#include <stdlib.h>

typedef struct {
                    int cedula;
                    String nombre;
                    String apellido;
                    Fecha fechanacimiento;
                    Hora hrllegada;
                    tipobailarin discriminante;
                    union{
                            int premios ;
                            Juvenil juv;
                            nacionalidad pais;
                            }Datosbailarin;
                }bailarin;

//Carga del bailarin
void cargabailarin (bailarin &a);

//Muestra bailarin
void muestrabailarin (bailarin b);

//Listar bailarin
void listabailarin(bailarin a);

//Aumentar premios bailarin
void aumentarpremiosbailarin(bailarin &a);

//FUNCIONES SELECTORAS

//Devolver cedula
int Darcedula (bailarin c);

//Devolver nombreb ailarin
void Darnombre(String &d,bailarin d1);

//Devolver apellido
void Darapellido(String &f, bailarin f1);

//Devolver fecha de nacimiento
Fecha Darnacimiento(bailarin g);

//Devolver hora de llegada
Hora Darhora (bailarin h);

//Devolver tipobailarin
tipobailarin Dartipobailarin (bailarin i);

//Devolver premios de infantil
int Darpremios (bailarin j);

//Devolver Juvenil
Juvenil Darjuvenil (bailarin l);

//Devolver nacionalidad
nacionalidad Darnacionalidad (bailarin m);


#endif // BAILARIN_H_INCLUDED
