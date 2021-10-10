
#include "Empleado.cpp"
#include<iostream>
using namespace std;
main(){
	string e_codempleado,e_puesto,e_nombres,e_apellidos,e_direccion,e_fn;
	int e_telefono;
	
	cout<<"Ingrese CodEmpleado:";
	cin>>e_codempleado;
	cout<<"Ingrese Puesto:";
	cin>>e_puesto;
	cout<<"Ingrese Nombres:";
	cin>>e_nombres;
	cout<<"Ingrese Apellidos:";
	cin>>e_apellidos;
	cout<<"Ingrese Direccion:";
	cin>>e_direccion;
	cout<<"Ingrese Telefono:";
	cin>>e_telefono;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>e_fn;
	// instanciar la clase por medio de un objeto
	Empleado obj_e = Empleado(e_nombres,e_apellidos,e_direccion,e_telefono,e_fn,e_codempleado,e_puesto);
	obj_e.agregar();
	
}
