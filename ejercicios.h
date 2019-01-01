#pragma once

#include <iostream>
#include <string>
#include <iomanip>

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
class Cuenta {
public:
	Cuenta(int saldoInicial) {
		if (saldoInicial <0) {
			saldoCuenta = 0;
			cout << "El saldo inicial era invalido." << endl;
		}
		else {
			saldoCuenta = saldoInicial;
		}
	}
	void credit(int monto) {
		saldoCuenta += monto;
	}
	void cargar(int monto) {
		if (monto > saldoCuenta) {
			cout<<"El monto a cargar excede el saldo de la cuenta." << endl;
		}
		else {
			saldoCuenta -= monto;
		}
	}
	int obtenerSaldoCuenta() {
		return saldoCuenta;
	}


private:
	int saldoCuenta;
};
class Factura {
public:
	Factura(string pieza, string descripcion, int cantidad, int precio) {
		establecerNumPieza(pieza);
		establecerDescPieza(descripcion);
		establecerCantArt(cantidad);
		establecerPrecioArt(precio);
	 }
	void establecerNumPieza(string pieza) {
		numPieza = pieza;
	}
	void establecerDescPieza(string desc) {
		descPieza = desc;
	}
	void establecerCantArt(int cant) {
		if (cant < 0) {
			cantArt = 0;
		}
		else {
			cantArt = cant;
		}
	}
	void establecerPrecioArt(int precio) {
		if (precio < 0) {
			precioArt = 0;
		}
		else {
			precioArt = precio;
		}
	}
	string obtenerNumPieza() {
		return numPieza;
	}
	string obtenerDescPieza() {
		return descPieza;
	}
	int obtenerCantArt() {
		return cantArt;
	}
	int obtenerPrecioArt() {
		return precioArt;
	}
	int obtenerMontoFactura() {
		int monto = cantArt * precioArt;
		return monto;
	}

private:
	string numPieza;
	string descPieza;
	int cantArt;
	int precioArt;
};
class Empleado {
public:
	Empleado(string nombre, string apellido, int salario) {

	}
	void establecerNombre(string nom) {
		primerNombre = nom;
	}
	void establecerApellido(string apell) {
		apellidoPaterno = apell;
	}
	void establecerSalarioMensaul(int salario) {
		if (salario < 0) {
			salarioMensual = 0;
		}
		else {
			salarioMensual = salario;
		}
	}
	string obtenerNombre() {
		return primerNombre;
	}

	string obtenerApellido() {
		return apellidoPaterno;
	}
	int obtenerSalarioMensual() {
		return salarioMensual;
	}
	void establecerSalarioAnual() {
		salarioAnual = salarioMensual * 12;
	}
	int obtenerSalarioAnual() {
		return salarioAnual;
	}

private:
	string primerNombre;
	string apellidoPaterno;
	int salarioMensual;
	int salarioAnual;
};
class Fecha {
public:
	Fecha(int dia, int mes, int anio) {
		establecerDia(dia);
		establecerMes(mes);
		establecerAnio(anio);
	}
	void establecerDia(int dia) {
		diap = dia;
	}
	void establecerMes(int mes) {
		if(mes < 1 or mes>12) {
			mesp = 1;
		}
		else {
			mesp = mes;
		}
	}
	void establecerAnio(int anio) {
		aniop = anio;
	}
	int obtenerDia() {
		return diap;
	}
	int obtenerMes() {
		return mesp;
	}
	int obtenerAnio() {
		return aniop;
	}
	void mostrarFecha() {
		cout << obtenerDia() << "/" << obtenerMes() << "/" << obtenerAnio();
	}
private:
	int diap;
	int mesp;
	int aniop;
};
class mainp {
public: 
	void ej421() {
		int c;
		c = 5;
		cout << c << endl;
		cout << c++ << endl;
		cout << c << endl;

		c = 5;
		cout << c << endl;
		cout << ++c << endl;
		cout << c << endl;

	}
};
class Ejer4 {
public:
	void ej4_13() {
		int kilometros;
		int litros;
		int totalk = 0;
		int totall = 0;
		double kpl;
		
		cout << "Escriba los kilometros usados (-1 para salir): ";
		cin >> kilometros;
		while (kilometros != -1) {
			cout << "Escriba los litros: ";
			cin >> litros;
			kpl = static_cast<double>(kilometros) / litros;
			totalk += kilometros;
			totall += litros;
			double promedio = static_cast<double>( totalk) / totall;
			cout << "KPL en este reabastecimiento: " << fixed << kpl << endl;
			cout << "Total KPL: " << fixed << promedio << endl;
			cout << endl;
			cout << "Escriba los kilometros usados (-1 para salir): ";
			cin >> kilometros;
		}
		
	}
};