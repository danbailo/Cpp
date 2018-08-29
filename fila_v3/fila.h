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
    Fila(int fila);
    ~Fila();
    void insere(int fila, int valor);
    void removeNo();
    void getInicio();
    void getFim();
    void printFila();
};

#endif