#include <iostream>
#include <string>

#include "alumno.h"
#include "listasDeAlumnos.h"

using namespace std;

int main()
{
    ListaAlumno *lista = new ListaAlumno();
    Alumno *alumno;
    Nodo *nodo;

    alumno = new Alumno("Carlos Ruz", 14, 3);
    nodo = new Nodo(alumno);
    lista->insertarOrdenadoCreditos(nodo);

    alumno = new Alumno("Miguel Sanchez", 3, 3);
    nodo = new Nodo(alumno);
    lista->insertarOrdenadoCreditos(nodo);

    alumno = new Alumno("Manuel Alonzo", 51, 3);
    nodo = new Nodo(alumno);
    lista->insertarOrdenadoCreditos(nodo);

    alumno = new Alumno("Oscar Ramirez", 23, 3);
    nodo = new Nodo(alumno);
    lista->insertarOrdenadoCreditos(nodo);

    lista->imprimir();

    return 0;
}