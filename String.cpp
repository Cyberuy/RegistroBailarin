#include "String.h"

// Determina largo de String

int strlar(String a1)
{
    int i1 = 0;

    while(a1[i1] != '\0')
    {
        i1++;
    }

    return i1;
}

// Desplega String por pantalla

void print (String b1)
{
    int i2=0;

    printf("\n");

    while(b1[i2] != '\0')
    {
        printf("%c", b1[i2]);
        i2++;
    }

    printf("\n");
}

// Leer String por teclado

void scan (String &d1)
{
    fflush(stdin);
    int i3 = 0;
    char c1;
    scanf("%c",&c1);

    while(c1 != '\n' && i3 < MAX-1)
    {
        d1[i3] = c1;
        i3++;
        scanf("%c", &c1);
    }

    d1[i3] = '\0';
}

//  Determina si el primer String es menor alfabeticamente que el segundo

boolean strmen(String e1,String e2)
{
    int i4;
    boolean esmenor = TRUE;
    i4 = 0;

    while(e1[i4] == e2[i4] && (e1[i4] != '\0' && e2[i4] != '\0'))
    {
       i4++;
    }

    if(e1[i4] > e2[i4] || e2[i4] == '\0')
    {
        esmenor=FALSE;
    }

    return esmenor;
}

// Determina si dos Strings son iguales

boolean streq(String f1, String f2)
{
    int i5 = 0;
    boolean equivalentes = TRUE;

    if(strlar(f1) != strlar(f2))
    {
        equivalentes = FALSE;
    }

    else
    {
        while(equivalentes == TRUE && f1[i5] != '\0')
        {
            if(f1[i5] != f2[i5])
            {
                equivalentes = FALSE;
            }

            i5++;
        }
    }

    return equivalentes;
}

// Copia segundo String en el primero

void strcop(String &g1, String g2)
{
    int i6 = 0;
    while(g2[i6] != '\0')
    {
        g1[i6] = g2[i6];
        i6++;
    }

    g1[i6] = '\0';
}

// Concatena sgundo String con primero

void strcon (String &h1, String h2)
{
    int ulterm = strlar(h1);
    int i7 = 0;

    while(h2[i7] != '\0' && ulterm < MAX-1)
    {
        h1[ulterm] = h2[i7];
        ulterm++;
        i7++;
    }

    h1[ulterm]='\0';
}

// Intercambia dos Strings

void strswp(String &j1, String &j2)
{
    String auxiliar;
    strcop(auxiliar, j2);
    strcop(j2, j1);
    strcop(j1, auxiliar);
}
