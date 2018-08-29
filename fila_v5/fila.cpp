#include <iostream>
#include "fila.h"

using namespace std;
No::No(int c, No* p){
    chave = c;
    prox = p;
}

Fila::Fila(){
    inicio = NULL;
    fim = NULL;
}

Fila::~Fila(){
    delete inicio;
    delete fim;
    inicio = fim = NULL;
}

void Fila::printFila(){
    No* temp = inicio;
    if(temp == NULL)
        return;

    while(temp != NULL){
        cout << temp->chave << endl;
        temp = temp->prox;
    }
}

Fila* Fila::insereNo(int valor){
    No* novo = new No(valor,NULL);
    if(inicio == NULL){
        inicio = novo;
        fim = novo;
    }
    else{
        fim->prox = novo;
        fim = novo;
    }
    return this;

}
int Fila::getFirst(){
    if(inicio!=NULL)return inicio->chave;
    return 0;
}

void Fila::removeNo(){
    No* temp = inicio;
    if(temp == NULL){
        return;
    }

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
