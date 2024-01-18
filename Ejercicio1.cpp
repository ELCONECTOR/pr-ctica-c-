//Autor: Diego zambrana salas
//Titulo: menú
/*Descripcion del problema: hacer un menú que de el nombre y apellido del alumno
//que Multiplicación con 2 números, División con 2 números,Multiplicación con 3
números,Mayor de 3 números y la opcion Salir.
Fecha: 17/01/2024*/
#include <iostream>
using namespace std;

// Funciones para realizar las operaciones
void multiplicacionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "El resultado de la multiplicación es: " << num1 * num2 << endl;
}

void divisionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el numerador: ";
	cin >> num1;
	cout << "Ingrese el denominador: ";
	cin >> num2;
	if (num2 != 0) {
		cout << "El resultado de la división es: " << num1 / num2 << endl;
	} else {
		cout << "Error: No se puede dividir por cero." << endl;
	}
}

void multiplicacionTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "Ingrese el tercer número: ";
	cin >> num3;
	cout << "El resultado de la multiplicación es: " << num1 * num2 * num3 << endl;
}

void mayorTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	cout << "Ingrese el tercer número: ";
	cin >> num3;
	
	double mayor = num1;
	
	if (num2 > mayor) {
		mayor = num2;
	}
	
	if (num3 > mayor) {
		mayor = num3;
	}
	
	cout << "El mayor de los tres números es: " << mayor << endl;
}

int main() {
	char opcion;
	string nombre, apellido;
	
	// Solicitar nombre y apellido del alumno
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su apellido: ";
	cin >> apellido;
	
	// Mostrar mensaje de bienvenida
	cout << "\n¡Bienvenido, " << nombre << " " << apellido << "!\n" << endl;
	
	do {
		// Mostrar el menú de opciones
		cout << "Menú:" << endl;
		cout << "1. Multiplicación con 2 números" << endl;
		cout << "2. División con 2 números" << endl;
		cout << "3. Multiplicación con 3 números" << endl;
		cout << "4. Mayor de 3 números" << endl;
		cout << "S. Salir" << endl;
		
		// Solicitar la opción al usuario
		cout << "Seleccione una opción: ";
		cin >> opcion;
		
		// Realizar la acción según la opción seleccionada
		switch (opcion) {
		case '1':
			multiplicacionDosNumeros();
			break;
		case '2':
			divisionDosNumeros();
			break;
		case '3':
			multiplicacionTresNumeros();
			break;
		case '4':
			mayorTresNumeros();
			break;
		case 'S':
		case 's':
			cout << "Saliendo del programa. ¡Hasta luego!\n" << endl;
			break;
		default:
			cout << "Opción no válida. Por favor, seleccione una opción válida.\n" << endl;
		}
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}
