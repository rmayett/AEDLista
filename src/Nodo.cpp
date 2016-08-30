/*Rodrigo Mayett Guzman
el programa define los metodos 
del nodo que fueron definidos en Nodo.h*/
#include "Nodo.h"
//crea un nodo con un dato dado por 
//el usuario y establece el siguiente 
Nodo::Nodo(int Dato , Nodo* Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
//crea un nodo con un dato unico
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
//cambia el dato guardado en el nodo
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
//establece cual sera el siguiente nodo del actual
void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
//obtiene el dato guardado en el nodo
int Nodo::getDato()
{
	return this->Dato;
}
//obtiene el nodo siguiente del actual
Nodo* Nodo::getSig()
{
	return this->Sig;
}