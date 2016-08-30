/*Rodrigo Mayett Guzman
el programa define los metodos de la lista 
que fueron definidos en lista.h*/
#include "Lista.h"
//el metodo crea una lista vacia 
Lista::Lista()
{
	this->H=NULL;
	this->T=NULL;
}
//el metodo crea una lista 
//con un dato dado por el usuario
Lista::Lista(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
}
//el metodo revisa si la lista esta vacia
bool Lista::ListaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}
//el metodo agrega un nodo al inicio 
//con un dato dado por el usuario 
void Lista::AddInicio(int Dato)
{
	Nodo* aux = new Nodo(Dato,this->H);
	if (ListaVacia())
	{
		this->T= aux;
	}
	this->H= aux;
}

//el metodo agrega un nodo al final 
//con un dato dado por el usuario 
void Lista::AddFinal(int Dato){
	Nodo * aux = new Nodo(Dato);
	if (!ListaVacia())
	{
		T->setSig(aux);
		T=aux;		
	}
	else{
		this->H=aux;
		this->T=aux;
	}		
}
//el metodo agrega un nodo con un valor 
//despues del valor dado como referencia 
void Lista::AddRef(int Dato, int Ref){
	if (ListaVacia())
	{
		Nodo * aux = new Nodo(Dato);
		this->H =aux;
		this->T =this->H;
		std::cout<<"No se encontro la referencia porque la lista esta vacia"<<std::endl;
		return ;		
	}
	Nodo * aux = this->H;
	while(aux->getDato()!=Ref&&aux!=this->T){
		aux = aux->getSig();
	}
	if (aux!=NULL)
	{
		Nodo * aux2 = new Nodo(Dato,aux->getSig());
		aux->setSig(aux2);
	}
	else{
		std::cout<<"No existe la referenci aen la lista"<<std::endl;
	}
}
//remmueve el nodo que se encuentra al inicio 
//y pasa la referencia de H al siguiente
int Lista::RemoveInicio(){
	if (!ListaVacia())
	{
		int Dato =this->H->getDato();	
	if (this->H==NULL)
	{
		this->T=NULL;
	}
	this->H=this->H->getSig();
	return Dato;
	}
	else{
		std::cout<<"La lista esta vacia"<<std::endl;		
	}	
}
//remueve el nodo al final de la lista 
//y pasa la referencia de T al anterior
int Lista::RemoveFinal(){
	if (ListaVacia())
	{
		std::cout<<"La lista esta vacia"<<std::endl;
	}
	int Dato =T->getDato();
	if (this->H!=this->T)
	{
		Nodo * aux = this->H;
		while(aux->getSig()!=this->T){
			aux = aux->getSig();
		}
		this->T=aux;
		this->T->setSig(NULL);
	}
	else{
		this->H=NULL;
		this->T=NULL;
	}
	return Dato;
}
//busca un elemento de la lista 
//e imprime el dato encontrado si es que existe 
Nodo * Lista::BuscarElemento(int Dato){
	if (ListaVacia())
	{
		std::cout<<"No se encuentra el elemento"<<std::endl;
		return NULL;		
	}
	Nodo * aux = this->H;
	while(aux->getDato()!=Dato&&aux!=NULL){
		aux=aux->getSig();				
	//en caso de no encontrar el elemento buscado
	//termina el ciclo y muestra que no se encontro 
	if (aux==NULL)
		{
			std::cout<<"No se encuentra el elemento"<<std::endl;
			return NULL;
		}
	}
	if (aux->getDato()==Dato)
	{
		std::cout<<aux->getDato()<<" se encuentra en la lista"<<std::endl;	
	}
	return aux;
}
//remueve un nodo de la lista que tenga 
//el dato usado como referencia
Nodo * Lista::RemoveRef(int Ref){
	if (ListaVacia())
	{
		std::cout<<"No se encontro la referencia porque la lista esta vacia"<<std::endl;
		return NULL;		
	}
	Nodo * aux = this->H;
	Nodo * aux2 = this->H;
	while(aux->getDato()!=Ref&&aux!=this->T){
		aux = aux->getSig();
	}
	while(aux2->getSig()!=aux){
		aux2 = aux2->getSig();
	}
	if (aux!=NULL)
	{		
		aux2->setSig(aux->getSig());
	}
	else{
		std::cout<<"No existe la referencia en la lista"<<std::endl;
	}
}
//vacia la lista borrando las referencias	
int Lista::VaciarLista(){
	this->H=NULL;
	this->T=NULL;
	std::cout<<"Lista Vaciada"<<std::endl;	
}
//muestra los nodos de la lista
void Lista::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}