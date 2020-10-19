#include "Fecha.h"

void cargafecha(Fecha &a)
{
    printf("\nIngrese un dia del 1 al 31: ");
    scanf("%d", & a.Dia);

    printf("\nIngrese un mes del 1 al 12: ");
    scanf("%d", & a.Mes);

    printf("\nIngrese un anio: ");
    scanf("%d", & a.Anio);
}

void muestrafecha(Fecha b)
{
    printf("\nDia: %d/%d/%d",b.Dia, b.Mes, b.Anio);
}

int Dardia (Fecha c)
{
    return c.Dia;
}

int Darmes ( Fecha d)
{
    return d.Mes;
}

int Daranio ( Fecha e)
{
    return e.Anio;
}

boolean fechavalida(Fecha f)
{
    boolean valida=FALSE;
    switch(Darmes(f))
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if(Dardia(f)<=31)
                {
                    valida= TRUE;
                }
                break;

        case 4:
        case 6:
        case 9:
        case 11:  if (Dardia(f) <= 30)
                  {
                     valida=TRUE;
                  }
                   break;

        case 2: if(Daranio(f)%4==0)
                {
                    if(Dardia(f)<=29)
                    {
                        valida=TRUE;
                    }
                }
                else
                {
                    if(Dardia(f)<=28)
                    {
                        valida=TRUE;
                    }
                }
    }

    return valida;
}

// Comparar fechas
boolean fechasiguales(Fecha a,Fecha b)
{
    boolean match = FALSE;

    if(a.Anio == b.Anio && a.Dia == b.Dia && a.Mes == b.Mes)
    {
        match = TRUE;
    }

    return match;
}












