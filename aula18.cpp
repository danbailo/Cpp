#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	char nome[100];
	int tam;
	char* pfim;
	char* pini;

	cout << "Digite um nome: ";
	cin >> nome;

	tam = strlen(nome);
	cout << "Tam é "<<tam << endl;	
	pfim = &nome[tam - 1];
	pini = &nome[0];

	while(true)
	{
		cout << *pfim;
		if(pfim == pini)
			break;
		pfim--;
	}
	cout<<("\n");
	return 0;
}
