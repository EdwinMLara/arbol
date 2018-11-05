#include "tree.h"

using namespace std;

int main()
{
	Nodo *a=new Nodo("A");
	Nodo *b=new Nodo("B");
	Nodo *c=new Nodo("C");
	Nodo *d=new Nodo("D");
	Nodo *e=new Nodo("E");
	Nodo *f=new Nodo("F");
	Nodo *g=new Nodo("G");
	Nodo *h=new Nodo("H");
	Nodo *i=new Nodo("I");
	f->add_son(b);
	f->add_son(g);
	b->add_son(a);
	b->add_son(d);
	d->add_son(c);
	d->add_son(e);
	g->add_son(i);
	i->add_son(h);
	tree* arbol= new tree(f);
	arbol->recorrido_preorden(f);
	system("pause");
}
