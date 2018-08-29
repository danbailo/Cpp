#include <iostream>
// #include <string>

using namespace std;

int main(){

	char vetor[7] = "1aniel";

	// retorna true se o caracter testado é uma letra e false se for numero
	if(isalpha(vetor[1])){
		cout << "entrei" << endl;
	}
	cout << "não entrei" << endl;

	//retorna true se o caracter testado é um digito e false se for uma letra
	if(isdigit(vetor[0])){
		cout << "entrei" << endl;
		return 1;
	}
	cout << "não entrei" << endl;

	return 0;
}