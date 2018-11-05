#include<string>
#include <iostream>
#include <vector>
using namespace std;

class Nodo
{
private:
	
	string nombre;
	int son;
	Nodo *primerSon;
	Nodo *UltimoSon;
public:
	Nodo *next;
	void add_son(Nodo* nodo);
	Nodo *getSon();

	Nodo();
	virtual ~Nodo();
	
	Nodo (string nombre);
	
	void setSon(int son)
	{
		this->son=son;
	}

	int getNumeroSon();
	
	const string& getNombre() const
	{
		return nombre;
	}

	void setNombre(const string& nombre)
	{
		this->nombre=nombre;
	}

		
};