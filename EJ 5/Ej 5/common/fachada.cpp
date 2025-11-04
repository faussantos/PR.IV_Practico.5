#include "fachada.h"
CapaLogica :: CapaLogica(): Mascotas(), Duenios()
{
}

void CapaLogica :: altaDuenio (duenio * d, tipoError &error)
{
    error = ok;
    if(Duenios.member(d->getCedula()))
        error = existeDuenio;
    else
    {
        Duenios.Insert(d);
    }
}

void CapaLogica :: asignarMascota (long int ci, mascota * masc, tipoError &error)
{
    error = ok;
    if(!Duenios.member(ci))
        error = noExisteDuenio;
    else
    {
        duenio* d = Duenios.Find(ci);
        if(d->tieneMascota())
            error = tieneMascota;
        else
        {
            Mascotas.insertar(masc);
            d->setMascota(masc);
        }
    }

}

void CapaLogica :: listarDuenios (iterador &iter)
{
    Duenios.listarDuenio(iter);
}
int CapaLogica :: contarPeso(float peso)
{
    return Mascotas.contarPeso(peso);
}
