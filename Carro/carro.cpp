#include <iostream>
#include <string>
#include "Carro.h"
using namespace std;

//   acessor do arquivo.h
// vai na classe do arquivo .h, digita :: e ele entra na classe
void Carro::setMarca(string marca){
	this->marca = marca;
}
string Carro::getMarca(){
	return marca;
}

void Carro::setAno(int ano){
	if(ano > 1990)
		this->ano = ano; //ano da classe vai receber a ano que chegou como parâmetro
	else
		this->ano = 1990; //vai ser sempre 1990 pra cima
}
int Carro::getAno(){
	return ano;	
}

// toda vez que eu construir um carro, por padrão ele vai ser fiat independente
// dos valores que vao vir dps
Carro::Carro(){
	this->marca = "Fiat";
	this->ano = 1990;
}

Carro::Carro(string marca, int ano){
	this->marca = marca;
	this->ano = ano;
}

// destrutor destrói o objeto assim que ele parar de ser usado, ou seja, apaga ele da memória
Carro::~Carro(){
	cout << "Carro foi destruido!" << endl;
}

int Carro::pneu = 4;