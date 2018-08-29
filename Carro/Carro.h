// No header(.h) eu só falo o que tem nas classes,como ela é e o que ela precisa
// e no codigo fonte(.cpp) eu irei falar o que cada um faz
#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

// construtor constrói o objeto
// onde este é um método que tem o msm nome da classe

// destrutor destrói o objeto
// onde este é um método que tem o msm nome da classe e começa com "~"
class Carro{
public:
	static int pneu;
	Carro(); //esse construtor ja existe de forma implicita, porem estamos explicitando sua criação
	Carro(string marca, int ano);
	~Carro();	
	void setMarca(string marca);
	string getMarca();
	void setAno(int ano);
	int getAno();
private:
	string marca;
	int ano;
};

#endif /* CARRO_H */