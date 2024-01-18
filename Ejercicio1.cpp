//Autor: Diego zambrana salas
//Titulo: men�
/*Descripcion del problema: hacer un men� que de el nombre y apellido del alumno
//que Multiplicaci�n con 2 n�meros, Divisi�n con 2 n�meros,Multiplicaci�n con 3
n�meros,Mayor de 3 n�meros y la opcion Salir.
Fecha: 17/01/2024*/
#include <iostream>
using namespace std;

// Funciones para realizar las operaciones
void multiplicacionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "El resultado de la multiplicaci�n es: " << num1 * num2 << endl;
}

void divisionDosNumeros() {
	double num1, num2;
	cout << "Ingrese el numerador: ";
	cin >> num1;
	cout << "Ingrese el denominador: ";
	cin >> num2;
	if (num2 != 0) {
		cout << "El resultado de la divisi�n es: " << num1 / num2 << endl;
	} else {
		cout << "Error: No se puede dividir por cero." << endl;
	}
}

void multiplicacionTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "Ingrese el tercer n�mero: ";
	cin >> num3;
	cout << "El resultado de la multiplicaci�n es: " << num1 * num2 * num3 << endl;
}

void mayorTresNumeros() {
	double num1, num2, num3;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	cout << "Ingrese el tercer n�mero: ";
	cin >> num3;
	
	double mayor = num1;
	
	if (num2 > mayor) {
		mayor = num2;
	}
	
	if (num3 > mayor) {
		mayor = num3;
	}
	
	cout << "El mayor de los tres n�meros es: " << mayor << endl;
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
	cout << "\n�Bienvenido, " << nombre << " " << apellido << "!\n" << endl;
	
	do {
		// Mostrar el men� de opciones
		cout << "Men�:" << endl;
		cout << "1. Multiplicaci�n con 2 n�meros" << endl;
		cout << "2. Divisi�n con 2 n�meros" << endl;
		cout << "3. Multiplicaci�n con 3 n�meros" << endl;
		cout << "4. Mayor de 3 n�meros" << endl;
		cout << "S. Salir" << endl;
		
		// Solicitar la opci�n al usuario
		cout << "Seleccione una opci�n: ";
		cin >> opcion;
		
		// Realizar la acci�n seg�n la opci�n seleccionada
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
			cout << "Saliendo del programa. �Hasta luego!\n" << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Por favor, seleccione una opci�n v�lida.\n" << endl;
		}
	} while (opcion != 'S' && opcion != 's');
	
	return 0;
}
