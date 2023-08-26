#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Alumno
{
private:
    int creditosAprobados;
    int semestreEquivalente;
    string nombreCompleto;

public:
    // constructor
    Alumno(string _nombreCompleto, int _creditosAprobados, int _semestreEquivalente);
    // destructor
    ~Alumno();
    /* getters */
    string obtenerNombreCompleto();
    int obtenerCreditosAprobados();
    int obtenerSemestreEquivalente();
    /* fin getters */
    /* setters */
    void establecerNombreCompleto(string _nombreCompleto);
    void establecercreditosAprobados(int _creditosAprobados);
    void establecerSemestreEquivalente(int _semestreEquivalente);
    /* fin setters */
    void mostrarDatos(string enLista = "");
};

#endif