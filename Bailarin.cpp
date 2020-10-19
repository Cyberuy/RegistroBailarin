#include "Bailarin.h"

//Carga del bailarin
void cargabailarin (bailarin &a)
{
    system("cls");

    printf("\nIngrese cedula del bailarin: ");
    scanf("%d", &a.cedula);

    printf("\nIngrese nombre del bailarin: ");
    scan(a.nombre);

    printf("\nIngrese apellido del bailarin: ");
    scan(a.apellido);

    printf("\nIngrese fecha de nacimiento: ");
    cargafecha(a.fechanacimiento);

    printf("\nIngrese hora de llegada: ");
    cargarhora(a.hrllegada);
    cargatipobailarin(a.discriminante);

    switch(a.discriminante)
    {
        case INFANTIL: printf("\nIngrese la cantidad de premios obtenidos: ");
                       scanf("%d", &a.Datosbailarin.premios);
                       break;

        case JUVENIL: cargajuvenil(a.Datosbailarin.juv);
                      break;

        case ADULTO: carganacionalidad(a.Datosbailarin.pais);
                     break;
    }
}

//Muestra bailarin
void muestrabailarin (bailarin b)
{
    printf("\nLos datos del bailarin son: ");
    printf("\nCedula: %d", b.cedula);
    printf("\nNombre: ");
    print(b.nombre);
    printf("\nApellido: ");
    print(b.apellido);
    printf("\nFecha de nacimiento :");
    muestrafecha(b.fechanacimiento);
    printf("\nHora de llegada: ");
    muestrahora(b.hrllegada);
    printf("\nCategoria: ");
    muestratipobailarin(b.discriminante);

    switch(b.discriminante)
    {
        case INFANTIL: printf("\nLa cantidad de premios obtenidos: %d ", b.Datosbailarin.premios);
                       break;

        case JUVENIL: muestrajuvenil(b.Datosbailarin.juv);
                      break;

        case ADULTO: printf("\nPais de origen:");
                     muestranacionalidad(b.Datosbailarin.pais);
                     break;
    }
}

//Listar bailarin
void listabailarin( bailarin a)
{
    printf("\n*************************");
    printf("\nCedula: %d", a.cedula);
    printf("\nNombre: ");
    print(a.nombre);
    printf("\nApellido: ");
    print(a.apellido);
    printf("\nCategoria: ");
    muestratipobailarin(a.discriminante);
    printf("\n*************************\n");
}


//FUNCIONES SELECTORAS

//Devolver cedula
int Darcedula (bailarin c)
{
    return c.cedula;
}

//Devolver nombreb ailarin
void Darnombre(String &d,bailarin d1)
{
    strcop(d,d1.nombre);
}

//Devolver apellido
void Darapellido(String &f, bailarin f1)
{
    strcop(f,f1.apellido);
}

//Devolver fecha de nacimiento
Fecha Darnacimiento( bailarin g)
{
    return g.fechanacimiento;
}

//Devolver hora de llegada
Hora Darhora (bailarin h)
{
    return h.hrllegada;
}

//Devolver tipobailarin
tipobailarin Dartipobailarin (bailarin i)
{
    return i.discriminante;
}

//Aumentar premios bailarin
void aumentarpremiosbailarin(bailarin &a)
{
    a.Datosbailarin.premios++;
}

//Devolver premios de infantil
int Darpremios (bailarin j)
{
    return j.Datosbailarin.premios;
}

//Devolver Juvenil
Juvenil Darjuvenil (bailarin l)
{
    return l.Datosbailarin.juv;
}

//Devolver nacionalidad
nacionalidad Darnacionalidad (bailarin m)
{
    return m.Datosbailarin.pais;
}
