// deitele.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Librocalif.h"
#include "ejercicios.h"

using namespace std;



int main()
{
	string nom;
	
	cout << "Ingresa el nombre del curso: ";
	getline(cin, nom);
	LibroCalificaciones libro(nom);

	libro.mostrarMensaje();


}

