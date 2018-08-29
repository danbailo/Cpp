#include <iostream>
#include "fila.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Fila F;

    F.insere(12);
    F.insere(23);
    F.insere(76);
    F.insere(22);
    F.insere(34);
    F.printFila();
    F.removeNo();
    F.printFila();
    F.getInicio();
    F.getFim();

    return 0;
}
