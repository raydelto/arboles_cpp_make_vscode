#include "Nodo.h"

Nodo::Nodo(std::string nombre) : _nombre(nombre),
                                 _siguiente(nullptr), _primerHijo(nullptr), _ultimoHijo(nullptr)
{
}
void Nodo::AgregarHijo(Nodo *hijo)
{
    if (_primerHijo == nullptr) // No tiene hijos
    {
        _primerHijo = hijo;
    }
    else
    {
        _ultimoHijo->_siguiente = hijo;
    }
    _ultimoHijo = hijo;
}

Nodo *Nodo::GetPrimerHijo()
{
    return _primerHijo;
}

std::string Nodo::GetNombre()
{
    return _nombre;
}

Nodo* Nodo::GetSiguiente()
{
    return _siguiente;
}