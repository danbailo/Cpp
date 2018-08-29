#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>
using namespace std;

class Cadastro
{
public:
	Cadastro();
	~Cadastro();
	void setIdade(int idade);
	int getIdade();
	void setNascimento(string nascimento);
	int getNascimento();
	void setCPF(string cpf);
	string getCPF();
	void setRG(string rg);
	string getRG();

private:
	int idade;
	int nasc[8];
	string cpf;
	string rg;
};

#endif /* CADASTRO_H */