#pragma once
#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones {
public:
	LibroCalificaciones(string nombre) {
		establecerNombreCurso(nombre);
	}
	void establecerNombreCurso(string nombre) {
		nombreCurso = nombre;
	}

	string obtenerNombreCurso() {
		return nombreCurso;
	}

	void mostrarMensaje() {
		cout << "Bienvenido al libro de Calificaciones para:\n " << obtenerNombreCurso() << " !." << endl;
	}

private:
	string nombreCurso;
};
