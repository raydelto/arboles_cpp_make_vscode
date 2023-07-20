#include "Arbol.h"

int main()
{
    Nodo presidente("Presidente");
    Nodo vp1("VP 1");
    Nodo vp2("VP 2");
    Nodo director1("Director 1");
    Nodo director2("Director 2");
    Nodo gerente1("Gerente 1");
    Nodo gerente2("Gerente 2");
    Nodo supervisor1("Supervisor 1");
    Nodo operario1("Operario 1");
    Nodo operario2("Operario 2");
    presidente.AgregarHijo(&vp1);
    presidente.AgregarHijo(&vp2);
    vp1.AgregarHijo(&director1);
    vp1.AgregarHijo(&director2);
    director1.AgregarHijo(&gerente1);
    director1.AgregarHijo(&gerente2);
    gerente1.AgregarHijo(&supervisor1);
    supervisor1.AgregarHijo(&operario1);
    supervisor1.AgregarHijo(&operario2);
    Arbol arbol(&presidente);
    arbol.Recorrer();
}
