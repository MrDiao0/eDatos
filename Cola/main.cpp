#include "cola.cpp"
#include <stdexcept>

int main(){
	try{
		Cola <int> c;
		c.adicionar (5);
		c.adicionar (10);
		c.adicionar (15);

		c.mostrar ();
		c.eliminar ();
		c.mostrar ();
		c.eliminar ();
		c.mostrar ();
		c.eliminar ();
	}
	catch (const std::out_of_range &oor){
  		cout << "Cola se encuentra vacio" << endl;
 	}
}