#include <iostream>
#include "fila.h"

using namespace std;

int main(int argc, char const *argv[]) {
    int fila;
    fila = 5;
    Fila F(fila);
    Fila *f=new Fila(fila);//no heap

    F.insere(1,8);

    return 0;
}
