/*
Titulo: Tabla de Multiplicar. 
Autor:diego zambrana salas
Descripcion: Escribir un programa que imprima la tabla de multiplicar de un numero dado por el usuario. 
Fecha:17/01/2024
*/

#include <iostream>


using namespace std;

int main() {
	int numero;
	
	// Mensaje para solicitar al usuario que ingrese un n?mero
	cout << " Tabla de Multiplicar\n";
	cout << "Ingrese el numero para realizar la tabla: ";
	cin >> numero;
	
	// Mostrar la tabla de multiplicar del n?mero ingresado
	cout << "Tabla de multiplicar del " << numero << ":\n";
	for (int i = 1; i <= 10; ++i) {
		// Mostrar cada multiplicaci?n en una l?nea
		cout << numero << "x" << i << "=" << (numero * i) << "\n";
	}
	
	return 0;
}
