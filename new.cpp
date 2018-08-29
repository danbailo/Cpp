#include <iostream>

using namespace std;


int main(int argc, char const *argv[]){

	int *vet = new int[10];
	
	vet[0] = 5;

	cout << vet[0] << endl;

	*(vet + 0) = 10;

	cout << *(vet + 0) << endl;

	return 0;
}