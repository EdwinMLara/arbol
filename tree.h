#include "Nodo.h"

class tree
{
private:
	Nodo *root;
public:
	void recorrido_preorden(Nodo * nodo);
	tree(Nodo *root);
	virtual ~tree();


};
