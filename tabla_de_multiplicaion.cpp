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
	
	// Mensaje para solicitar al usuario que ingrese un numero
	cout << " Tabla de Multiplicar\n";
	cout << "Ingrese el numero para realizar la tabla: ";
	cin >> numero;
	
	// Mostrar la tabla de multiplicar del numero ingresado
	cout << "Tabla de multiplicar del " << numero << ":\n";
	for (int i = 1; i <= 10; ++i) {
		// Mostrar cada multiplicacion en una linea
		cout << numero << "x" << i << "=" << (numero * i) << "\n";
	}
	
	return 0;
}
