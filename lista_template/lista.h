#ifndef _LISTA_H_
#define _LISTA_H_

#include <iostream>

using namespace std;

template <class T>
class No{
private:
	T chave;
	T* prox;
public:
	No(T chave){
		this->chave = chave;
		this->prox = NULL;
	}

	T obterValor(){
		return chave;
	}

	T* obterProx(){
		return prox;
	}

	void setProx(T* p){
		prox = p;
	}
};

template <class T>
class Lista : public <class T>No {
private:
	T* inicio;
	T* fim;
public:
	// Lista(T chave);
	Lista(){
		inicio = fim = NULL;
	}
	// ~Lista();
	// void insere_lista(T chave){
		// T* novo = new No(chave);
	// }
	// T getInicio()
	void print_lista();
};



#endif /*_LISTA_H_*/