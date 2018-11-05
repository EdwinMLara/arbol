#include "Nodo.h"


void Nodo:: add_son(Nodo *nodo)
{
	son++;
	if(primerSon==NULL)
	{
		primerSon=nodo;
		UltimoSon=nodo;
	}
	else
	{
		UltimoSon->next=nodo;
		UltimoSon=nodo;
	}
}

Nodo* Nodo::getSon()
{
	return primerSon;
}

Nodo::Nodo(string nombre)
{
	this->nombre=nombre;
	next=NULL;
	primerSon=NULL;
	UltimoSon=NULL;
	son=0;
}

int Nodo::getNumeroSon()
{
	return this->son;
}

Nodo::~Nodo()
{
}