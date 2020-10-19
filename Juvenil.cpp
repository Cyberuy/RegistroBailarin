#include "Juvenil.h"

//Cargar juvenil
void cargajuvenil (Juvenil &a)
{
    printf("\nIngrese  estilo de danza del juvenil: ");
    scan(a.danza);
    printf("\nEl bailarin canta?: ");
    cargabool(a.canta);
    }

//Muestra juvenil
void muestrajuvenil (Juvenil b)
{
    printf("\nEstilo de danza: ");
    print(b.danza);
    printf("\nEl bailarin canta?: ");
    desplega(b.canta);

}

//FUNCIONES SELECTORAS

//Devolver estilo de danza
void Dardanza ( Juvenil c, String &c1)
{
    strcop(c1,c.danza);
}

//Devolver si canta
boolean Darcanta (Juvenil d)
{
    return d.canta;
}
