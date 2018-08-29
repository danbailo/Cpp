#include <iostream>

using namespace std;

int foo(int n = 5){
    return (n * n);
}

int main(int argc, char const *argv[])
{
    // caso eu nao passe nenhum parametro, a funcao recebe 5 como padrao;
    // funciona para qqr outra coisa q precise de argumentos;
    cout << foo() << endl;

    cout << foo(10) << endl;


    return 0;
}
