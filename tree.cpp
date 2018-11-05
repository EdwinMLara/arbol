#include "tree.h"

void tree::recorrido_preorden(Nodo*nodo)
{
    cout<<nodo->getNombre()<<endl;
		Nodo* i=nodo->getSon();
		while (i!=NULL)
		{
			recorrido_preorden(i);
			i=i->next;
		}
}




tree::tree(Nodo *root)
{
	this->root=root;
}

tree::~tree()
{
}

