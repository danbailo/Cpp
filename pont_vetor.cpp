#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int* parray = new int[10];
	int aux[4];

	aux[0] = 10;
	aux[1] = 20;
	aux[2] = 30;
	aux[3] = 40;
	// sizeof(aux) é igual a 16, pois um int tem 4 bytes e o tamanho do vetor aux e 4
	// sizeof(int) é igual a 4, logo, 16/4 = 4;
	for (int i = 0; i < sizeof(aux)/sizeof(int); ++i){
		cout << aux[i] << endl;
	}

	cout << "Digite um numero: ";
	cin >> *(parray+9);
	cout << "Voce digitou: " << *(parray+9) << endl;
	
	delete[] (parray+9);

	cout << "Voce digitou: " << *(parray+9) << endl;

	parray = NULL;

	cout << "Voce digitou: " << *(parray) << endl;

	return 0;
}
