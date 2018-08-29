#include <iostream>
#include "fila.h"

using namespace std;

int main(int argc, char const *argv[]) {

  Fila F;

  F.insereNo(7);
  F.insereNo(11);
  F.insereNo(23);
  F.printFila();
  F.getInicio();
  F.getFim();
  F.removeNo();
  F.removeNo();
  // F.removeNo();
  F.printFila();

  return 0;
}
