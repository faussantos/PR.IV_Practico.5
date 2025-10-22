#include "mascota.h"

mascota :: mascota (): apodo()
{
    numero = 1;
    peso = 1;
}

 mascota :: mascota (int num, String apod, float pes): apodo(apod)
 {
     numero = num;
     peso = pes;
 }

 mascota :: ~mascota ()
 {
 }

 int mascota :: getNumero()
 {
     return numero;
 }

 String mascota :: getApodo()
 {
     return apodo;
 }

 float mascota :: getPeso()
 {
     return peso;
 }
