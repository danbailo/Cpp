#include <iostream>
#include <stdio.h>
#include "fila.h"

using namespace std;

int main(int argc, char const *argv[]){
    
    Fila F;
    int *p = new int[10];
    *(p+1) = 5;
    cout << *(p+1) << endl;
    F.insereNo(23);
    F.insereNo(11);

    F.printFila();
    return 0;
}
