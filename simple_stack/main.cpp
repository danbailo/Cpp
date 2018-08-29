#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char const *argv[]) {

  Pilha p;

  cout << "Pilha vazia: " << p.vazia() << endl;

  p.empilhar(10);
  p.empilhar(11);
  p.empilhar(12);
  p.desempilhar();
  cout << "Topo: " << p.GetTopo() << endl;
  cout << "Pilha vazia: " << p.vazia() << endl;

  return 0;
}
