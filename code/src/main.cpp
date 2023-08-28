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

    alumno2 = new Alumno("Jose Jose", 115, 7);
    alumno1 = new Alumno("Carlos Matias", 502, 9);
    alumno3 = new Alumno("Naruto Uzumaki", 245, 5);
    alumno4 = new Alumno("Armando Manzanero", 300, 3);
    alumno5 = new Alumno("Jain Galice", 100, 1);

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
    cout << "Imprimiendo por orden descendente (créditos aprobados)" << endl;
    lista->imprimir();

    delete nodo1;
    delete nodo2;
    delete nodo3;
    delete nodo4;
    delete nodo5;

    return 0;
}
