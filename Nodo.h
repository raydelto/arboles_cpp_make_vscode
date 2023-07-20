#pragma once
#include <string>

class Nodo
{
public:
    Nodo(std::string nombre);
    void AgregarHijo(Nodo* hijo);
    Nodo* GetPrimerHijo();
    Nodo* GetSiguiente();
    std::string GetNombre();

private:
    std::string _nombre;
    Nodo* _primerHijo;
    Nodo* _ultimoHijo;
    Nodo* _siguiente;
};