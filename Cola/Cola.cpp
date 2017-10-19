#include <vector>
#include <iostream>
using namespace std;

template <class tm> 
class Cola : public vector <tm>
{
	public:
		Cola ();
		void adicionar (tm elem);
		void mostrar ();
		tm eliminar();
};
template <class tm>
Cola <tm>::Cola (): vector<tm> () {}

template <class tm>
void Cola <tm>::adicionar (tm elemento) 
{	
	this -> push_back (elemento);
}

template <class tm>
void Cola <tm>::mostrar () 
{
	int n = this->size ();
	for (int i=0; i < n; i++)
	{
		cout << this->at (i) << " ";
	}
	cout << endl;
}

template <class tm>
tm Cola <tm>::eliminar()
{
	int First = 0;
	tm elemento = this-> at(First);
	this -> erase(this -> begin());
	return elemento;
}