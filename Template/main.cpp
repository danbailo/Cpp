#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char *argv[])
{
	Pilha<const char*> p(100);
	Pilha<int> b(5);

	p.empilhar("python");
	p.empilhar("haskell");
	p.empilhar("C++");
	//p.desempilhar();
	if(p.vazia())
		cout << "Pilha vazia!\n";
	else
		cout << "Pilha NAO vazia!\n";
	if(p.getTopo() != NULL)
		cout << "Topo: " << p.getTopo() << endl;
	else
		cout << "A pilha esta vazia!!\n";

		b.empilhar(54);
		b.empilhar(57);
		b.empilhar(59);
		cout << "Topo: " << b.getTopo() << endl;

	return 0;
}
