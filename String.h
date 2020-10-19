#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
# include "Boolean.h"
const int MAX=80;
typedef char String[MAX];

//a) determina largo de String
int strlar(String a1);
//b) desplegar String por pantalla
void print (String b1);
//c) Leer String por teclado
void scan (String &d1);
//d)  Determinar si el primer String es menor alfabeticamente que el segundo
boolean strmen(String e1,String e2);
//e) Determinar si dos Strings son iguales
boolean streq(String f1,String f2);
//f) Copiar segundo String en el primero
void strcop(String &g1,String g2);
//g) concatenar sgundo String con primero

void strcon (String &h1,String h2);
//h) intrcambiar dos Strings
void strswp(String &j1,String &j2);


#endif // STRING_H_INCLUDED
