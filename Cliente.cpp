#include "Persona.cpp"
#include<iostream>
using namespace std;
class Cliente : Persona{
	// atributos
	private  : string nit;
	// constructor
	public : 
	Cliente(){
	}
	Cliente(string nom,string ape,string dir,int t,string f,string n) : Persona(nom,ape,dir,t,f){
		nit = n;
	}
	
	// metodos
	// set modificar un atributo
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFn(string f){fn = f;}
	// get visualizar un atributo
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFn(){return fn;}
	// get visualizar un atributo
	void agregar(){
		cout<<"________________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha Nacimiento:"<<fn<<endl;
	}
	
};
