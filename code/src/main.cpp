#include <iostream>
#include <string>

#include "alumno.h"
#include "listasDeAlumnos.h"

using namespace std;

int main()
{
    ListaAlumno *lista = new ListaAlumno();

    Alumno *alumno1;
    Alumno *alumno2;
    Alumno *alumno3;
    Alumno *alumno4;
    Alumno *alumno5;
    Nodo *nodo1;
    Nodo *nodo2;
    Nodo *nodo3;
    Nodo *nodo4;
    Nodo *nodo5;

    alumno1 = new Alumno("Yoda", 400, 9);
    alumno2 = new Alumno("Obi-Wan Kenobi", 345, 7);
    alumno3 = new Alumno("Ahsaka Tano", 300, 5);
    alumno4 = new Alumno("Luke Skywalker", 245, 3);
    alumno5 = new Alumno("Grogu", 100, 1);

    nodo1 = new Nodo(alumno1);
    nodo2 = new Nodo(alumno2);
    nodo3 = new Nodo(alumno3);
    nodo4 = new Nodo(alumno4);
    nodo5 = new Nodo(alumno5);

    lista->insertarOrdenadoCreditos(nodo1);
    lista->insertarOrdenadoCreditos(nodo2);
    lista->insertarOrdenadoCreditos(nodo3);
    lista->insertarOrdenadoCreditos(nodo4);
    lista->insertarOrdenadoCreditos(nodo5);

    lista->imprimir();

    return 0;
}