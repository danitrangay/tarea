#include<iostream>
#include "Empleado.h"

using namespace std;

void Empleado::pedirDatos(){
	cout<<"Coloca el codigo del empleado: ";
	cin>>codigo;
	cout<<"Coloca el puesto del empleado: ";
	cin>>nombres;
}


void Empleado::mostrarDatos(){
	cout<<"Codigo del empleado: "<<codigo<<endl;
	cout<<"Puesto del empleado: "<<nombres<<endl;
}
