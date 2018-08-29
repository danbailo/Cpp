#ifndef FILA_H
#define FILA_H

class Fila{
private:
  typedef struct no{
    int chave;
    no *prox;
  }*noPtr;

  noPtr inicio;
  noPtr fim;
  noPtr temp;
public:
  Fila();
  // ~Fila();
  void insereNo(int valor);
  void removeNo();
  void getInicio();
  void getFim();
  void printFila();
};

#endif
