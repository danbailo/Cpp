#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char nome[100];

	cout << "Digite seu nome:" << endl;
	cin >> nome;
	int tam = strlen(nome);
	char *pini = &nome[0];
	char *pfim = &nome[tam-1]; //tem q ser -1, pois o ultimo caracter de uma string é o '\0'

	cout << tam << endl;
	cout << *pini << endl;
	cout << *pfim << endl;

	char *p = &nome[tam-1];

	for(int i = tam; i >= 0; i--)
		cout << *p << endl;
		p--;
	return 0;
}