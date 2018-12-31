#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "Librocalif.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre) {
	establecerNombreCurso(nombre);
}
void LibroCalificaciones::establecerNombreCurso(string nombre) {
	if (nombre.length() <= 30) {
		nombreCurso = nombre;
	}
	else {
		nombreCurso = nombre.substr(0, 30);
	}

}
string LibroCalificaciones::obtenerNombreCurso() {
	return nombreCurso;
}
void LibroCalificaciones::mostrarMensaje() {
	cout << "Bienvenido al libro de Calificaciones para:\n " << obtenerNombreCurso() << " !." << endl;
}