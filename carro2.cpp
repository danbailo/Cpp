#include <iostream>

using namespace std;

// Orientação a Objetos é uma abstração da realidade

// Classe
// prática boa de programação todos os atributos do objeto serem privados
// conceito de encapsulamento, proteger os atributos e usar métodos setters e getters da classe
// para fazer o acesso e edição dos valores
class Carro{
	private: 
		string marca;
		int ano;
		string cor;
	public: // Isto serve para que os objetos desse tipo não acessem diretamente os atributos
		void setMarca(string x){// Método
			marca = x;		
		} 
		string getMarca(){ // retorna qual é a marca
			return marca;
		}
		void setAno(int n){
			if(n > 1990)
				ano = n;
			else
				ano = 1990; //vai ser sempre 1990 pra cima
		}
		int getAno(){
			return ano;
		}
};

// Métodos são funções da classe que faz o que eu pedi

int main(){

	//Objeto
	Carro c1;
	c1.setMarca("Fiat");
	c1.setAno(2015);

	Carro c2;
	c2.setMarca("Ferrari");
	c2.setAno(1900);


	cout << c1.getMarca() << endl;
	cout << c1.getAno() << endl;
	
	cout << endl;
	
	cout << c2.getMarca() << endl;
	cout << c2.getAno() << endl;
	

	return 0;
}
