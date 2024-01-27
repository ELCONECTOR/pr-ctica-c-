// Inclusión de bibliotecas necesarias
#include <iostream>  // Biblioteca estándar para entrada y salida estándar
#include <string>    // Biblioteca para manipulación de cadenas de texto

using namespace std;

// Funciones prototipo
void sumaCadena(const string& cadena);
void nombreCompleto(const string& nombreCompleto);
void ofuscarCadena(const string& cadena);

int main() {
	char opcion;
	string entrada;
	
	do {
		// Menú principal
		cout << "MENU PRINCIPAL" << endl;
		cout << "(1) - String suma de una cadena." << endl;
		cout << "(2) - String Nombre completo." << endl;
		cout << "(3) - String ofuscar." << endl;
		cout << "(s/S) - Salir" << endl;
		cout << "Seleccione una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			cout << "Ingrese una cadena para la suma: ";
			cin >> entrada;
			sumaCadena(entrada);
			break;
		case '2':
			cout << "Ingrese un nombre completo: ";
			cin.ignore(); // Limpiar el buffer del teclado antes de getline
			getline(cin, entrada);
			nombreCompleto(entrada);
			break;
		case '3':
			cout << "Ingrese una cadena para ofuscar: ";
			cin >> entrada;
			ofuscarCadena(entrada);
			break;
		case 's':
		case 'S':
			cout << "Saliendo del programa. ¡Hasta luego!" << endl;
			break;
		default:
			cout << "Opción no válida. Inténtelo de nuevo." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}

// Función para realizar la suma de una cadena de números separados por '+'
void sumaCadena(const string& cadena) {
	int suma = 0;
	size_t pos = 0;
	do {
		size_t found = cadena.find('+', pos);
		suma += stoi(cadena.substr(pos, found - pos));
		pos = found + 1;
	} while (pos != 0);
	cout << "Resultado: " << suma << endl;
}

// Función para formatear un nombre completo (apellidos paterno, materno y nombre)
void nombreCompleto(const string& nombreCompleto) {
	size_t pos1 = nombreCompleto.find_first_of(' ');
	size_t pos2 = nombreCompleto.find_last_of(' ');
	
	// Verificar si hay más de un espacio (si hay apellidos)
	if (pos1 != pos2) {
		string apellidoPaterno = nombreCompleto.substr(pos1 + 1, pos2 - pos1 - 1);
		string apellidoMaterno = nombreCompleto.substr(pos2 + 1);
		string nombre = nombreCompleto.substr(0, pos1);
		cout << "Nombre completo formateado: " << apellidoPaterno << " " << apellidoMaterno << " " << nombre << endl;
	} else {
		// Si no hay apellidos, imprimir solo el nombre
		cout << "Nombre completo formateado: " << nombreCompleto << endl;
	}
}

// Función para ofuscar una cadena según la tabla de caracteres especificada
void ofuscarCadena(const string& cadena) {
	string ofuscada = cadena;
	for (char& c : ofuscada) {
		switch (c) {
		case 'A':
		case 'a':
			c = '4';
			break;
		case 'E':
		case 'e':
			c = '3';
			break;
		case 'I':
		case 'i':
			c = '1';
			break;
		case 'O':
		case 'o':
			c = '0';
			break;
		case 'S':
		case 's':
			c = '5';
			break;
		case 'T':
		case 't':
			c = '7';
			break;
		default:
			break;
		}
	}
	cout << "Cadena ofuscada: " << ofuscada << endl;
}
