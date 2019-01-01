#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class LibroCalificaciones {
public:
	LibroCalificaciones(string,string);
	void establecerNombreCurso(string);
	string obtenerNombreCurso();
	void establecerNombreInstructor(string);
	string obtenerNombreInstructor();
	void mostrarMensaje();
	void determinarPromedioClase();

private:
	string nombreCurso;
	string nombreInstructor;
};
class Analisis {
public:
	void procesarResultadoExamen();
};
