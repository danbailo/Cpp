#include <iostream>
#include "stack.h"

using namespace std;

Pilha::Pilha(){
  vet = new int[100];
  max_tam = 99;
  topo = -1;
}
Pilha::~Pilha(){
  delete[] vet;
}
void Pilha::empilhar(int e){
  if(topo == max_tam)
    cout << "Pilha cheia!" << endl;
  else
    vet[++topo] = e;
}
void Pilha::desempilhar(){
  if(topo == -1)
    cout << "Pilha vazia!" << endl;
  else
    topo--;
}
int Pilha::GetTopo(){
  if(topo != -1)
    return vet[topo];
  return -1;
}
int Pilha::vazia(){
  return (topo == -1); //se topo for igual a -1, vai retornar 1 que é true e vai estar vazio
}                     //se for diferente de -1 vai retornar 0 que é false, logo n esta vazia
