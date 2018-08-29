#include <iostream>
#include "fila.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Fila fila[5];
    for(int i=0; i<5; i++){
        fila[i] = Fila();
    }

    fila[0].insere(12);
    fila[0].printFila();

    return 0;
}
