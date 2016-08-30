/*Rodrigo Mayett Guzman
metodo principal de la lista*/
#include "Lista.h"

int main()
{
	/*usa el constructor de lista
	 para crear una lista vacia*/
	Lista l = Lista();
	l.AddInicio(4);	
	l.AddInicio(5);
	l.AddFinal(10);
	l.AddRef(15,5);
	l.AddInicio(6);
	l.AddInicio(7);
	l.RemoveInicio();
	l.RemoveFinal();
	l.AddRef(15,4);
	l.BuscarElemento(14);
	l.RemoveRef(5);
	l.VaciarLista();
	l.Show();	
	return 0;
}