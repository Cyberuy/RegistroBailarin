#include "Muestra.h"

//Obtener posicion de bailarin
//PRECONDICION: El bailarin existe

int obtenerposicionbailarin(Arrebailarin a, int ced)
{
    int j = 0;
    boolean match = FALSE;

    do
    {
        if(ced == Darcedula(a.arre[j]))
        {
            match = TRUE;
        }
        else
        {
            j++;
        }

    }
    while(match == FALSE);

    return j;
}


// Inicializar arreglo

void inicializar (Arrebailarin &a)
{
    a.tope = 0;
}


// Muestra del arreglo bailarin

void muestramuestra (Arrebailarin b)
{
    int i;
    printf ("Lista de bailarines: ");

    for(i = 0; i < b.tope; i++)
    {
        muestrabailarin(b.arre[i]);
    }
}

// Determina si un bailarin existe e partir de una cedula

boolean existebailarin (Arrebailarin c, int ced)
{
    boolean existe = FALSE;
    int i = 0;

    while (i < c.tope && existe == FALSE)
    {
        if(ced == Darcedula(c.arre[i]))
        {
            existe= TRUE;
        }
        else
        {
            i++;
        }
    }
    return existe;
}

//Hora de ingreso del ultimo bailarin

Hora ultimoingreso (Arrebailarin d)
{
   return Darhora(d.arre[d.tope-1]);
}

//Verificar si hay espacio

boolean cupo (Arrebailarin e)
{
    boolean espacio = FALSE;

    if(e.tope < TAM)
    {
        espacio = TRUE;
    }

    return espacio;
}

//Ingresar nuevo bailarin
//PRECONDICION: verificar que el arreglo tenga espacio
//PRECONDICION: El bailarin fue cargado

void ingreso (Arrebailarin &f, bailarin b)
{
    if(f.tope > 0)
    {
        if(compararHoras(Darhora(b), Darhora(f.arre[f.tope-1])))
        {
            printf("\nERROR: No se puede ingresar un bailarin a la hora seleccionada");
        }
        else
        {
            f.arre[f.tope] = b;
            f.tope++;
        }
    }

    else
    {
        f.arre[f.tope] = b;
        f.tope++;
    }
}

//Dar salida a un bailarin
//PRECONDICION:Verificar que la cedula exista

void salida (Arrebailarin &g, int ced)
{
    int posicion = obtenerposicionbailarin(g, ced);
    int i;

    for(i = posicion; i < g.tope - 1; i++)
    {
        g.arre[i] = g.arre[i+1];
    }

    g.tope--;
}

//Listar por pantalla todos los bailarines y por orden de llegada(cedula, nombre, apellido, tipo)

void listartodos (Arrebailarin h)
{
    int i;
    for(i = 0; i < h.tope; i++)
    {
        listabailarin(h.arre[i]);
    }
}

//listar por cedula datos de un bailarin
//PRECONDICION: Verificar que la cedula existe

void listaruno (Arrebailarin i, int ced)
{
    int posicion = obtenerposicionbailarin(i, ced);

    muestrabailarin(i.arre[posicion]);
}

//Devolver cantidad de bailarines por tipo

void cantipos (Arrebailarin j, int &inf, int &ju, int &ad)
{
    int i;
    inf = 0;
    ju = 0;
    ad = 0;

    for(i = 0; i < j.tope; i++)
    {
        switch(j.arre[i].discriminante)
        {
            case INFANTIL: inf++;
                        break;

            case JUVENIL: ju++;
                        break;

            case ADULTO: ad++;
                        break;
        }
    }
}

//Cantidad de bailarines por fecha

int  cantnacido (Arrebailarin k,Fecha a)
{
    int i, cant = 0;

    for(i = 0; i < k.tope; i++)
    {
        if(fechasiguales(k.arre[i].fechanacimiento, a))
        {
            cant++;
        }
    }
    return cant;
}

//Por cedula aumentar en uno  los premios de infantil
//PRECONDICION: Verificar que la cedula exista

void maspremios (Arrebailarin &l, int ced)
{
    int posicion = obtenerposicionbailarin(l,ced);

    if(Dartipobailarin(l.arre[posicion]) == INFANTIL)
    {
        aumentarpremiosbailarin(l.arre[posicion]);
    }
    else
    {
        printf("\nEl bailarin ingresado no es infantil");
    }
}


//Mostrar bailarines que superen determinada cantidad de premios

void superapremio (Arrebailarin m, int num)
{
    int i;
    for(i = 0; i < m.tope; i++)
    {
        if(Dartipobailarin(m.arre[i]) == INFANTIL)
        {
            if(Darpremios(m.arre[i]) > num)
            {
                muestrabailarin(m.arre[i]);
            }
            printf("\n");
        }
    }
}
