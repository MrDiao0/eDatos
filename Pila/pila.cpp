#include <vector>
#include <iostream>
using namespace std;

template <class  tm> 
class Pila : public vector < tm>{
	public:
		Pila ();
		void adicionar ( tm elem);
		 tm eliminar ();
		void mostrar ();
}

template <class  tm>

Pila < tm>::Pila (): vector< tm> () {}

template <class tm>

void Pila < tm>::adicionar ( tm elem) {
	this->push_back (elem);
}

template <class  tm>

void Pila < tm>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++)
		cout << this->at (i)  << ", ";
	cout << endl;
}

template <class  tm>

 tm Pila < tm>::eliminar () {
	int posUltimo = this->size () - 1;
	 tm elem = this->at (posUltimo);
	this->pop_back();
	return elem;
}


