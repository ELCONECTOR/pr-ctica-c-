/*
Titulo: Generacion de numeros aleatorios. 
Autor:Diego zambrana salas
Descripcion: Escribir un programa que imprima numeros aleatorios entre 0 - 99, donde "N" sea ingresado por el usuario. 
Fecha:17/01/2024

*/

#include <iostream>
#include <cstdlib> // Necesario para la funcion rand()
#include <ctime>   // Necesario para la funcion time()


using namespace std;

int main() {
	int cantidad;
	
	// Mensaje para solicitar al usuario que ingrese la cantidad de n?meros a generar
	cout << " Generacion de numeros Aleatorios\n";
	cout << "¿Cuantos numeros quiere generar? ";
	cin >> cantidad;
	
	// Inicializar la semilla para obtener n?meros realmente aleatorios
	srand(time(0));
	
	// Mostrar los n?meros aleatorios generados
	cout << "Nnmeros aleatorios generados: ";
	for (int i = 0; i < cantidad; ++i) {
		// Generar n?meros aleatorios entre 0 y 99 y mostrarlos
		cout << rand() % 100;
		// Agregar una coma y un espacio entre los n?meros (excepto el ?ltimo)
		if (i < cantidad - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	
	return 0;
}
