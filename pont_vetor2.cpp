#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
		
	int array[] = {1,2,3,4,5};
	int *parray;

	// uma maneira de percorrer vetores usando ponteiros é simplesmente printar o indice
	// do vetor utilizando a variavel ponteiro, ex *(parray+0)
	parray = &array[0];

	cout << array[2] << endl;

	for(int i=0; i < sizeof(array)/sizeof(int); i++){
		cout << *parray << endl;
		parray++;
	}

	return 0;
}