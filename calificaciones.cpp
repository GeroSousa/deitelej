#pragma once
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Librocalif.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string curso, string instructor) {
	establecerNombreCurso(curso);
	establecerNombreInstructor(instructor);
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
void LibroCalificaciones::establecerNombreInstructor(string nombre) {
	nombreInstructor = nombre;
}
string LibroCalificaciones::obtenerNombreInstructor() {
	return nombreInstructor;
}
void LibroCalificaciones::mostrarMensaje() {
	cout << "Bienvenido al libro de Calificaciones para:\n " << obtenerNombreCurso() << " !." << endl;
	cout << "Este curso es presentado por: " << obtenerNombreInstructor() << endl;
}
void LibroCalificaciones::determinarPromedioClase() {
	int total, contador,calificacion;
	total = 0;
	contador = 0;
	double promedio = 0;
	cout << "Escriba una calificacion: ";
	cin >> calificacion;
	while (calificacion != -1) {
		
		total += calificacion;
		contador++;
		cout << "Escriba una calificacion: ";
		cin >> calificacion;
	}
	promedio = static_cast<double>(total) / contador;
	cout << "El total de las calificaciones: " << total << endl;
	cout << "El promedio de la clase es: " <<setprecision(2) << fixed << promedio << endl;
}

void Analisis::procesarResultadoExamen() {
	int aprobados = 0;
	int reprobados = 0;
	int resultado;
	int contadorEstudiantes = 1;
	while (contadorEstudiantes <= 10) {
		cout << "Escriba el resultado: (1 = aprobado, 2 = desaprobado) ";
		cin >> resultado;
		if (resultado == 1) {
			aprobados++;
		}
		else {
			reprobados++;
		}
		contadorEstudiantes++;
	}
	cout << "Aprobados: " << aprobados << "\nDesaprobados: " << reprobados << endl;
	if (aprobados > 8) {
		cout << "Aumentar la colegiatura." << endl;
	}
}