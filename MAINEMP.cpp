#include "EMPLEADO.cpp"

#include <iostream>

using namespace std;

main(){

	string nombres,apellidos,direccion,puesto;

	int telefono,codigo_empleado,sueldo;

	cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;
	
	cout<<"Ingrese Codigo De Empleado: ";

	cin>>codigo_empleado;
	
	cout<<"Ingrese Puesto/Cargo: ";

	cin>>puesto;
	
	cout<<"Ingrese Suedo: ";

	cin>>sueldo;

	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,codigo_empleado,puesto,sueldo);

	obj.mostrar();

}
