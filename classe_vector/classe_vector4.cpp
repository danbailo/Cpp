#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    
    vector<int> vetor(3);
    
    vetor[0] = 12;
    vetor[1] = 23;
    vetor[2] = 55;


    int i = 0;

    vector<int>::reverse_iterator rit;
    //rit é o inverso do it; logo, rbegin retorna o ultimo elemento do vetor;
    for(rit = vetor.rbegin(); rit != vetor.rend(); rit++){
        *rit = i++; // inserindo os elementos no vetor de tras para frente
    }

    vector<int>::iterator it;
    for(it = vetor.begin(); it != vetor.end(); it++)
        cout << *it << endl;


    return 0;
}
