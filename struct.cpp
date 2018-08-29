#include <iostream>
#include <string>
#include <string.h>

using namespace std;

typedef struct pessoa{
	char nome[64];
	char cpf[16];
	char rg[16];
	int idade;
	int ano;
}pessoa;


int main(int argc, char const *argv[]){
	
	char nome[64],cpf[16],rg[16];
	int idade,ano;
	pessoa p1;
	pessoa p[3];

	strcpy(p1.nome,"Daniel Bailo");
	strcpy(p1.cpf,"429.999.628-35");
	strcpy(p1.rg,"49.945.238-0");
	p1.idade = 18;
	p1.ano = 1999;

	cout << "Nome: "<< p1.nome << endl;
	cout << "CPF: " << p1.cpf << endl;
	cout << "RG: " << p1.rg << endl;
	cout << "Idade: " << p1.idade << endl;
	cout << "Ano: " << p1.ano << endl;

	for (int i = 0; i < 3; i++){
		cout << "Digite o nome da pessoa: ";
		getline(cin,nome[64]);
		strcpy(p[i].nome,nome);
		cout << "Digite o CPF da pessoa: ";
		cin >> cpf[16];
		strcpy(p[i].cpf,cpf);
		cout << "Digite o RG da pessoa: ";
		cin >> rg[16];
		strcpy(p[i].rg,rg);
		cout << "Digite a idade da pessoa: ";
		cin >> idade;
		p[i].idade = idade;
		cout << "Digite o ano de nascimento da pessoa: ";
		cin >> ano;
		p[i].ano = ano;

	 
	}

	return 0;
}