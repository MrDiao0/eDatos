#include <vector>

#include <iostream>
using namespace std;

int size = 10;
int main () {

	vector <int> array (size);

	for(int i=0; i<size; ++i)
	    array[i] = i;
	array.push_back (999);

	for(int i=0; i<size+1; ++i)
    		cout << array.at (i) << ", ";
    	cout << endl << "Front: " << array.front () << endl;
    	cout << endl;

    	array.resize(100);

    	cout << "Tamaños: " << endl;
    	cout << array.size() << endl;
    	cout << array.capacity () << endl;
}
