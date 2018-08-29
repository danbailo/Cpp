#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    
    vector<int> vetor(3);

    vetor[0] = 54;
    vetor[1] = 11;
    vetor[2] = 89;

    // [begin, end) intervalo aberto em end, logo n posso printalo direto;
    cout << "primeiro elemento : " << *vetor.begin() << endl;
    cout << "ultimo elemento : " << *(--vetor.end()) << endl; //decrementa antes de usar, no caso a maneira correta


    return 0;
}