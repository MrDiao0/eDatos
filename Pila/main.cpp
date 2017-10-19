#include "pila.cpp"
#include <stdexcept>

int main(){
	try{
		Pila <int> p;
		p.adicionar (5);
		p.adicionar (10);
		p.adicionar (15);
	
		p.mostrar ();
		p.eliminar ();
		p.mostrar ();
		p.eliminar ();
		p.mostrar ();
		p.eliminar ();
  	}
  catch (const std::out_of_range &oor){
  	cout << "Pila se encuentra vacio" << endl;
  }
}
