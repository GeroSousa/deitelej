#pragma once

#include <iostream>
#include <string>

using namespace std;

class dat {
	//sucursal 316 frances  	0170316840000042473750

};
class Ejer2 {
public:
	void ej2_16() {
		double a, b;
		cout << "Ingrese el primer numero: ";
		cin >> a;
		cout << "Ingrese el segundo numero: ";
		cin >> b;
		cout << "la suma es: " << a + b << " ,la diferencia es: " << a - b << " ,el producto es: " << a * b << " ,el cociente es: " << a / b << endl;
	}
	void ej2_18() {
		double a, b;
		cout << "Ingrese el primer numero: ";
		cin >> a;
		cout << "Ingrese el segundo numero: ";
		cin >> b;
		if (a > b) {
			cout << "  " << a << " es el mas grande." << endl;
		}
		else if (a == b) {
			cout << "  " << a << " y " << b << " :son iguales." << endl;
		}
		else {
			cout << "  " << b << " es el mas grande." << endl;
		}
	}
	void ej2_19() {
		int a, b, c;
		cout << "ingrese el primer numero: ";
		cin >> a;
		cout << "ingrese el segundo numero: ";
		cin >> b;
		cout << "ingrese el tercer numero: ";
		cin >> c;
		if (a > b and a > c) {
			cout << a << " es el numero mas grande." << endl;
		}
		else if (b > c and b > a) {
			cout << b << " es el numero mas grande." << endl;
		}
		else if (c > b and c > a) {
			cout << c << " es el numero mas grande." << endl;
		}
		else if (a == b and a > c) {
			cout << a << " y " << b << " son iguales y son mas grandes que: " << c << endl;
		}
		else if (a == c and a > b) {
			cout << a << " y " << c << " son iguales y son mas grandes que: " << b << endl;
		}
		else if (b == c and b > a) {
			cout << b << " y " << c << " son iguales y son mas grandes que: " << a << endl;
		}
		else {
			cout << a << " , " << b << " y " << c << " , son los 3 iguales." << endl;
		}
		cout << "la suma total es: " << a + b + c << endl;
		cout << "el promedio es: " << (a + b + c) / 3 << endl;
	}
	void ej2_20() {
		int a;
		cout << "Ingrese el radio del circulo: ";
		cin >> a;
		cout << " el diametro del circulo es: " << a * 2 << endl;
		cout << " la circufenrencia del circulo es: " << 3.14159*a * 2 << endl;
		cout << " el area del circulo es: " << 3.14159*(a ^ 2) << endl;

	}
	void ej2_21() {
		cout << " ********        ***            *            *     \n *      *      *     *         ***          * *     \n *      *     *       *       *****        *   *     \n *      *     *       *         *         *     *     \n *      *     *       *         *        *       *     \n *      *     *       *         *         *     *     \n *      *     *       *         *          *   *    \n *      *      *     *          *           * *    \n ********        ***            *            *" << endl;
	}
	void ej2_22() {
		cout << "*\n**\n***\n****\n*****" << endl;
	}
	void ej2_23() {
		int mayor, menor, a, b, c, d, e;
		cout << "Ingrese 5 numeros: ";
		cin >> a >> b >> c >> d >> e;
		mayor = a;
		menor = a;
		if (b > mayor) {
			mayor = b;
		}
		if (b < menor) {
			menor = b;
		}
		if (c > mayor) {
			mayor = c;
		}
		if (c < menor) {
			menor = c;
		}
		if (d > mayor) {
			mayor = d;
		}
		if (d < menor) {
			menor = d;
		}
		if (e > mayor) {
			mayor = e;
		}
		if (e < menor) {
			menor = e;
		}

		cout << "el mayor es: " << mayor << endl;
		cout << "el menor es: " << menor << endl;
	}
	void ej2_24() {
		int a;
		cout << "Ingrese un numero: ";
		cin >> a;
		if (a % 2 == 0) {
			cout << "Es par!" << endl;
		}
		else {
			cout << "Es impar!" << endl;
		}
	}
	void ej2_25() {
		int a, b;
		cout << "Ingrese 2 numeros: ";
		cin >> a >> b;
		if (a%b == 0) {
			cout << "Es multiplo." << endl;
		}
		else {
			cout << "No es multiplo" << endl;
		}
	}
	void ej2_28() {
		int a;
		cout << "Ingrese un numero de 5 digitos: ";
		cin >> a;
		cout
			<< a / 10000 << " " << (a % 10000) / 1000 << " " << (a % 1000) / 100 << " " << (a % 100) / 10 << " " << a % 10 << endl;

	}
	void ej2_29() {
		cout << "numero  cuadrado  cubo\n0      0       0\n1      1       1\n2      4       8\n3      9       27\n4      16      64" << endl;//continuar
	}
};