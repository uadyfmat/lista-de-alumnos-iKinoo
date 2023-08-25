#include <iostream>
#include <string>

#include "alumno.h"

using namespace std;

int main()
{
    ListaPtr lista = crearLista();
    AlumnoPtr alumno1 = crearAlumno("Rodrigo Pacab", 18, 3);
    imprmirAlumno(alumno1);
    NodoPtr nodo = crearNodo(alumno1);

    return 0;
}