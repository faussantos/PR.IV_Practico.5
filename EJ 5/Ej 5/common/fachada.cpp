#include "fachada.h"
CapaLogica :: CapaLogica()
{
    Duenios = new duenios();
    Mascotas = new mascotas();
}

CapaLogica :: ~CapaLogica()
{
    delete Duenios;
    delete Mascotas;
}
void CapaLogica :: altaDuenio (duenio * d, tipoError &error)
{
    if(Duenios->member(d->getCedula()))
        error = existeDuenio;
    else
    {
        Duenios->Insert(d);
        error = ok;
    }
}

void CapaLogica :: asignarMascota (long int ci, mascota * masc, tipoError &error)
{
    if(!Duenios->member(ci))
        error = noExisteDuenio;
    else
    {
        duenio* d = Duenios->Find(ci);
        if(d->tieneMascota())
            error = tieneMascota;
        else
        {
            d->setMascota(masc);
            error = ok;
        }
    }

}

void CapaLogica :: listarDuenios (iterador &iter)
{
    Duenios->listarDuenio(iter);
}
int CapaLogica :: contarPeso(float peso)
{
    return Mascotas->contarPeso(peso);
}
