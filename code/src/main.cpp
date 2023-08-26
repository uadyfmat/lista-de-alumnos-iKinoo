#include <iostream>
#include <string>

#include "alumno.h"
#include "listasDeAlumnos.h"

using namespace std;

int main()
{
    ListaAlumno *lista = new ListaAlumno();
    Alumno *alumno = new Alumno("Bartolomeo Ortiz", 18, 3);
    Nodo *nodo = new Nodo(alumno);

    lista->insertarAlInicio(nodo);

    return 0;
}