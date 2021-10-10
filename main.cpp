#include <iostream>
#include "Empleado.cpp"

using namespace std;

int main(int argc, char** argv){
	Empleado empleados[5];
	Empleado* empleados2 = new Empleado[3];
	
	for(int i=0;i<3;i++){
		(empleados2+i)->pedirDatos();
		cout<<endl;
	}
	cout<<"Mostrando los datos de los emleados: "<<endl;
	
	for(int i=0;i<3;i++){
		(empleados2+i)->mostrarDatos();
		cout<<endl;
	}
	return 0;
}
