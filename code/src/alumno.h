/* TODO
    - separar en alumno.h y lista.h
*/

#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <string>

using namespace std;

typedef struct Alumno
{
    string nombreCompleto;
    int creditosAprobados;
    int semestreEquivalente;
} Alumno;
typedef Alumno *AlumnoPtr;

typedef struct Nodo
{
    AlumnoPtr alumno;
    struct Nodo *nodoSiguiente;

} Nodo;
typedef Nodo *NodoPtr;

typedef struct Lista
{
    NodoPtr cabeza;
} Lista;
typedef Lista *ListaPtr;

// prototipos de funciones

AlumnoPtr crearAlumno(string nombreCompleto, int creditosAprobados, int semestreEquivalente);
NodoPtr crearNodo(AlumnoPtr alumno);
ListaPtr crearLista();
void imprmirAlumno(AlumnoPtr alumno);
#endif