#ifndef FILA_H
#define FILA_H

class No{
public:
    No(int c, No* p);
    int chave;
    No *prox;
};

class Fila{
private:
    No *inicio;
    No *fim;
public:
    Fila();
    virtual ~Fila();
    Fila* insereNo(int valor);
    void removeNo();
    void printFila();
    int getFirst();
};


#endif /*FILA_H*/