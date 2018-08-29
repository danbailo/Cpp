#include<iostream>
#include"fila.h"

using namespace std;

Fila::Fila(){
    inicio = NULL;
    fim = NULL;
    temp = NULL;
}

Fila::~Fila(){
    cout << "Entrei\n";
    // delete inicio;
    // delete fim;
    // delete temp;
}

void Fila::insere(int valor){
    Fila *novo = new Fila();
    novo->chave = valor;
    novo->prox = NULL;
    if(inicio == NULL){
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