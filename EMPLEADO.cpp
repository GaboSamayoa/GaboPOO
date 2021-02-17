#include "PERSONA.cpp"

#include <iostream>

using namespace std;



class Empleado : Persona{

 private : int codigo_empleado, sueldo;
               string puesto;

 public :

 Empleado(){

 }

 Empleado(string nom,string ape,string dir,int tel,int cod,string pues,int suel) : Persona(nom,ape,dir,tel){ 
	
	codigo_empleado=cod;
	sueldo=suel;
	puesto=pues;

 }

 void setCodigo_empleado(int cod){codigo_empleado=cod;}
 
 void setNombres(string nom){nombres = nom;}

 void setApellidos(string ape){apellidos = ape;}

 void setDireccion(string dir){direccion = dir;}

 void setTelefono(int tel){telefono = tel;}
 
 void setPuesto(string pues){puesto = pues;}
 
 void setSueldo(int suel){sueldo = suel;}
 

 int getCodigo_empleado(){return codigo_empleado;}

 string getNombres(){	return nombres;}

 string getApellidos(){	return apellidos;}

 string getDireccion(){	return direccion;}

 int getTelefono(){	return telefono;}

 int getSueldo(){return sueldo;}
 
 string getPuesto(){return puesto;}


void mostrar(){

	cout<<"______________________"<<endl;

	cout<<codigo_empleado<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<", "<<puesto<<", "<<sueldo<<endl;

}

};
