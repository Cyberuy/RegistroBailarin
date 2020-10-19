#include "Hora.h"

//Cargar hora
//PRECONDICION: Verificar que la hora sea valida
void cargarhora (Hora &a)
{
    printf("\nIngrese una hora: ");
    scanf("%d", &a.hrs);
    printf("\nIngrese minutos: ");
    scanf("%d", &a.minuto);
}

//Muestra hora
void muestrahora (Hora b)
{
    if(b.minuto < 10)
    {
        printf("\nLa hora es: %d : 0%d",b.hrs,b.minuto);
    }
    else
    {
        printf("\nLa hora es: %d : %d",b.hrs,b.minuto);
    }
}

//Validar hora
boolean validarhora (Hora c)
{
    boolean valida = TRUE;

    if(c.hrs < 0 || c.hrs > 23)
    {
        valida = FALSE;
    }

    else
    {
        if(c.minuto < 0 || c.minuto > 59)
        {
            valida = FALSE;
        }
    }
    return valida;
}

//Comparar horas
boolean compararHoras(Hora hr1, Hora hr2)
{
    boolean menor = FALSE;

    if(hr1.hrs < hr2.hrs)
    {
        menor = TRUE;
    }
    else
    {
        if(hr1.minuto < hr2.minuto && hr1.hrs == hr2.hrs)
        {
            menor = TRUE;
        }
    }

    return menor;
}


//FUNCIONES SELECTORAS

//Devolver hora
int Darhrs (Hora c)
{
    return c.hrs;
}

//Devolver minutos
int Darminutos (Hora d)
{
    return d.minuto;
}


