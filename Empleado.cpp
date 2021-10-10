#include "Persona.cpp"
#include<iostream>
using namespace std;
class Empleado : Persona{
	
	private : string codempleado, puesto;
	
	public :
		Empleado(){
		}
		Empleado(string nom,string ape,string dir,int t,string f,string cod,string p) : Persona(nom,ape,dir,t,f){
		codempleado = cod, puesto = p ;
	}
	
	// metodos
	// set modificar un atributo
	void setCodempleado(string cod){codempleado = cod;}
	// get visualizar un atributo
	string getCodempleado(){return codempleado;}
	string getPuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFn(){return fn;}
	// get visualizar un atributo
	void agregar(){
		cout<<"________________"<<endl;
		cout<<"Codigo de empleado"<<codempleado<<endl;
		cout<<"Puesto:"<<puesto<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha Nacimiento:"<<fn<<endl;
	}
	
};
