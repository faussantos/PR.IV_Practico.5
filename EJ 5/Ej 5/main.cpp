#include <iostream>
#include "common/fachada.h"
int main() {
    CapaLogica capa;
    tipoError err;

    // Creamos dueños
    duenio* d1 = new duenio(12345, "Juan");
    duenio* d2 = new duenio(67890, "Ana");

    // Alta de d1
    capa.altaDuenio(d1, err);
    if (err == existeDuenio)
        std::cout << "Alta d1: El duenio ya existe" << std::endl;
    else
        std::cout << "Alta d1: Operacion realizada con exito" << std::endl;

    // Alta de d2
    capa.altaDuenio(d2, err);
    if (err == existeDuenio)
        std::cout << "Alta d2: El duenio ya existe" << std::endl;
    else
        std::cout << "Alta d2: Operacion realizada con exito" << std::endl;

    // Intento duplicado
    capa.altaDuenio(d1, err);
    if (err == existeDuenio)
        std::cout << "Alta d1 duplicado: El duenio ya existe" << std::endl;
    else
        std::cout << "Alta d1 duplicado: Operacion realizada con exito" << std::endl;

    // Creamos mascotas
    mascota* m1 = new mascota(1, "Firulais", 10.5f);
    mascota* m2 = new mascota(2, "Michi", 4.2f);

    // Asignar mascota a d1
    capa.asignarMascota(12345, m1, err);
    if (err == noExisteDuenio)
        std::cout << "Asignar mascota a d1: El duenio no existe" << std::endl;
    else if (err == tieneMascota)
        std::cout << "Asignar mascota a d1: El duenio ya tiene mascota" << std::endl;
    else
        std::cout << "Asignar mascota a d1: Operacion realizada con exito" << std::endl;

    // Intentar asignar otra mascota a d1
    capa.asignarMascota(12345, m2, err);
    if (err == noExisteDuenio)
        std::cout << "Asignar segunda mascota a d1: El duenio no existe" << std::endl;
    else if (err == tieneMascota)
        std::cout << "Asignar segunda mascota a d1: El duenio ya tiene mascota" << std::endl;
    else
        std::cout << "Asignar segunda mascota a d1: Operacion realizada con exito" << std::endl;

    // Intentar asignar mascota a un dueño inexistente
    capa.asignarMascota(99999, m2, err);
    if (err == noExisteDuenio)
        std::cout << "Asignar mascota a dueño inexistente: El duenio no existe" << std::endl;
    else if (err == tieneMascota)
        std::cout << "Asignar mascota a dueño inexistente: El duenio ya tiene mascota" << std::endl;
    else
        std::cout << "Asignar mascota a dueño inexistente: Operacion realizada con exito" << std::endl;

    return 0;
}
