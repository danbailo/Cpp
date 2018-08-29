#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int vet[10];

	for (int i = 0; i < 10; i++){
		vet[i] = 10*i;
		cout << vet[i] << endl;
	}

	printf("\n");

	for (int i = 9; i > -1; i--){
		vet[i] = 10*i;
		cout << vet[i] << endl;
	}

	return 0;
}