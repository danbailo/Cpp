#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

typedef struct pessoa{
	string nome;
	string cpf;
	string rg;
	int idade;
	int ano;
}pessoa;


int main(int argc, char const *argv[]){
	
	string nome,cpf,rg;
	int idade,ano,i;
	pessoa p1;
	pessoa p[3];

	p1.nome = "Daniel Bailo";
	p1.cpf = "429.999.628-35";
	p1.rg = "49.945.238-0";
	p1.idade = 18;
	p1.ano = 1999;

	cout << "Nome: "<< p1.nome << endl;
	cout << "CPF: " << p1.cpf << endl;
	cout << "RG: " << p1.rg << endl;
	cout << "Idade: " << p1.idade << endl;
	cout << "Ano: " << p1.ano << endl;
	cout << "\n";

	// p[i].nome = "";
	// p[i].cpf = "";
	// p[i].rg = "";
	// p[i].idade = 0;
	// p[i].ano = 0;

	for (i = 0; i < 3; i++){
		cout << "Digite o nome da pessoa: ";
       	cin >> p[i].nome;
       	
		cout << "Digite o CPF da pessoa: ";
		cin >> p[i].cpf;
		
		cout << "Digite o RG da pessoa: ";
		cin >> p[i].rg;
		
		cout << "Digite a idade da pessoa: ";
		cin >> p[i].idade;
		
		cout << "Digite o ano de nascimento da pessoa: ";
		cin >> p[i].ano;

		cout << "\n";

		cout << "Nome: "<< p[i].nome << endl;
		cout << "CPF: " << p[i].cpf << endl;
		cout << "RG: " << p[i].rg << endl;
		cout << "Idade: " << p[i].idade << endl;
		cout << "Ano: " << p[i].ano << endl;
	 
	}

	return 0;
}