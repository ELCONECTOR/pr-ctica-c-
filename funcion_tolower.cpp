//autor:diego zambrana salas
//funcion tolower
//15/1/2024
#include <iostream>
#include <cctype> // Necesario para tolower
using namespace std;

int main(int argc, char *argv[]) {
	char caracter;//define la varianle
	cout<<"ingrese una letra: ";
	cin>>caracter;//guaarda la variable
	caracter= tolower(caracter);//funcion para convertir en miniscula
	switch(caracter)
	{
	case 'a':
	
	case 'e': 
	
	case 'i': 
	
	case 'o':
	
	case 'u': cout<<"es vocal ";
	break;
	default: cout<<"no es vocal";
	}
	
	return 0;
}

