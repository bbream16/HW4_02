#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size){
	int new_size = size * 2;
	int* new_array = new int[new_size];



	return new_array;
}

int main(){
	
	int list[6] = { 1, 2, 3, 4, 5, 6 };
	int* p = doubleCapacity( p,6);

	
	for (int i = 0; i < 10; ++i)
		cout << p[i] << endl;

	delete[] p;
}