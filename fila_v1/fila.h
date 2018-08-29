#ifndef FILA_H
#define FILA_H

class Fila{
private:
    int chave;
    Fila *inicio;
    Fila *fim;
    Fila *temp;
    Fila *prox;
public:
    Fila();
    ~Fila();
    void insere(int valor);
    void removeNo();
    void getInicio();
    void getFim();
    void printFila();
};

#endif