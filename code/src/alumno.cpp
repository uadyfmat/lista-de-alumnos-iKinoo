#include "alumno.h"

// constructor
Alumno::Alumno(string _nombreCompleto, int _creditosAprovados, int _semestreEquivalente)
{

    nombreCompleto = _nombreCompleto;
    creditosAprovados = _creditosAprovados;
    semestreEquivalente = _semestreEquivalente;
    cout << "Se creado un alumno en la dirección " << this << endl;
}
// destructor
Alumno::~Alumno()
{

}

/* getters */
string Alumno::obtenerNombreCompleto()
{
    return nombreCompleto;
}
int Alumno::obtenerCreditosAprovados()
{
    return creditosAprovados;
}
int Alumno::obtenerSemestreEquivalente()
{
    return semestreEquivalente;
}
/* fin getters */
/* setters */
void Alumno::establecerNombreCompleto(string _nombreCompleto)
{
    nombreCompleto = _nombreCompleto;
}
void Alumno::establecerCreditosAprovados(int _creditosAprovados)
{
    creditosAprovados = _creditosAprovados;
}
void Alumno::establecerSemestreEquivalente(int _semestreEquivalente)
{
    semestreEquivalente = _semestreEquivalente;
}
/* fin setters */

void Alumno::mostrarDatos()
{
    cout << "Nombre: " << nombreCompleto << endl;
    cout << "Creditos Aprovados: " << creditosAprovados << endl;
    cout << "Semestre Equivalente: " << semestreEquivalente << endl;
}