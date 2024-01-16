#include <iostream>
using namespace std;
//autor:diego zambrana salas
//hacer un menú
//15/1/2024
/*
DATOS DE INICIO DEL PROGRAMA
1:OPCION  UNO
2:OPCION DOS
0:SALIR
*/
int main(int argc, char *argv[]) {
	int opcion;
	opcion=1;
	do {
		cout<<"MENU PRINCIAL"<<endl;
		cout<<"1:OPCION  UNO"<<endl;
		cout<<"2:OPCION DOS"<<endl;
		cout<<"0:SALIR"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:cout<<"Eligio la opcion 1"<<endl; 
			break;
			case 2:cout<<"Eligio la opcion 2"<<endl; 
			break;
			case 0:cout<<"Eligio la opcion salir"<<endl; 
			break;
			default:cout<<"No escogio la opcion correcta"<<endl;
		}
	} while(opcion != 0);
	return 0;
}

