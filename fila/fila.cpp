#include <iostream>
#include "fila.h"

using namespace std;

Fila::Fila(){
  inicio = NULL;
  fim = NULL;
  temp = NULL;
}

void Fila::insereNo(int valor){
  noPtr novo = new no;
  novo->chave = valor;
  novo->prox = NULL;
  if(inicio == NULL){ //primeira inserção;
    inicio = novo;
    fim = novo;
  }
  else{
    fim->prox = novo;
    fim = novo;
  }
}

void Fila::removeNo(){
  temp = inicio;
  if(temp == NULL)
    return;

  if(inicio == fim){
    delete temp;
    inicio = fim = NULL;
    cout << "O nó foi removido com sucesso!\n";
    return;
  }

  delete temp;
  inicio = inicio->prox;
  cout << "O nó foi removido com sucesso!\n";
}

void Fila::printFila(){
  temp = inicio;
  if(temp == NULL){
    cout << "Lista vazia!\n";
    return;
  }
  while(temp != NULL){
    cout << temp->chave << endl;
    temp = temp->prox;
  }
}

void Fila::getInicio(){
  if(inicio != NULL)
    cout << "Inicio: "<< inicio->chave << endl;
}

void Fila::getFim(){
  if(inicio != NULL)
    cout << "Fim: "<< fim->chave << endl;
}
