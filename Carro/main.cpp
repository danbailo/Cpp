#include <iostream>
#include <string>

using namespace std;

#include "Carro.h"
// Métodos são funções da classe que faz o que eu pedi

// construtor constrói o objeto
int main(){

	//Objeto
	Carro c1; //estou construindo meu objeto c1
	// c1.setMarca("Fiat"); //aqui eu estava preenchendo os valores
	// c1.setAno(2015);

	Carro c2; //construtor padrão
	c2.setMarca("Ferrari");
	c2.setAno(1900);

	// eu construi um carro c3 a partir do construtor, porem nao significa q eu nao precise
	// mais de um setter e getter, pois para editar o c3 eu usarei eles
	// setter é o responsavel por alterar o valor, "setar"
	Carro c3("Ford", 2005);
	c3.setAno(2009);

	cout << c1.getMarca() << endl;
	cout << c1.getAno() << endl;
	cout << c1.pneu << endl;
	
	cout << endl;
	
	cout << c2.getMarca() << endl;
	cout << c2.getAno() << endl;
	cout << c2.pneu << endl;
	
	cout << endl;
	
	cout << c3.getMarca() << endl;
	cout << c3.getAno() << endl;
	cout << c3.pneu << endl;

	c2.pneu = 2; //pneu é um atributo static da classe Carro, logo, todos objetos dessa classe
				 //necessariamente terão a mesma qtd de pneus, se um mudar, todos mudam!
				 //se não fosse static, cada um teria sua qtd de pneu individual, caso mudasse
	cout << "\n";
	
	cout << c1.getMarca() << endl;
	cout << c1.getAno() << endl;
	cout << c1.pneu << endl;
	
	cout << endl;
	
	cout << c2.getMarca() << endl;
	cout << c2.getAno() << endl;
	cout << c2.pneu << endl;
	
	cout << endl;
	
	cout << c3.getMarca() << endl;
	cout << c3.getAno() << endl;
	cout << c3.pneu << endl;
	return 0;
}