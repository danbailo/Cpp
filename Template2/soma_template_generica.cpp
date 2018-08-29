#include <iostream>

using namespace std;

//pode ser typename ou class
//o tipo tambem é T
template <typename T> T soma(T n1, T n2){
    return n1+n2;
}

int main(int argc, char const *argv[]){
    
    cout << "Soma de inteiros: "<< soma(5,6) << endl;
    cout << "Soma de reais: "<< soma(10.5,6.9) << endl;

    return 0;
}
