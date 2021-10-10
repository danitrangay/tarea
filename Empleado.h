#include<iostream>
#include<cstring>
class Empleado{
	//atributos
	private: int codigo;
	protected: int nombres;
		
	//metodos
	public:
		
		Empleado(int _codigo, int _puesto){
			codigo = _codigo;
			nombres = _puesto;
		}
		Empleado(){
			
		}
			//constructor
		
		void pedirDatos();
		void mostrarDatos();
		
};
