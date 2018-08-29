#include <iostream>
using namespace std;

struct Pessoa
{
private: //encapsulamento - public,private,protected
	int idade;

public:
	Pessoa(int idade);

	void setIdade(int idade)
	{
		this->idade = idade;
	}

	int getIdade()
	{
		return idade;
	}
};

// operador de escopo "::"
Pessoa::Pessoa(int idade)
{
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	Pessoa p(20);

	cout << p.getIdade() << endl;
	return 0;
}
