#include <iostream>

using namespace std;

// Orientação a Objetos é uma abstração da realidade

// Classe
class Carro{
	public: // São as coisas que um objeto pode ver
		string marca;
		int ano;
	private: // São as coisas que um objeto não pode ver
		string cor;
};


int main(){

	//Objeto
	Carro c1;
	c1.marca = "Fiat";
	c1.ano = 2017;
	// c1.cor = "azul"; dá erro!

	Carro c2;
	c2.marca = "Ferrari";
	c2.ano = 2018;

	cout << c1.marca << endl;
	cout << c2.marca << endl;

	return 0;
}