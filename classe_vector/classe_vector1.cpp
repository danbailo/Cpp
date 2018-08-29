#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    
    // int vet[100];
    vector<int> v;

    v.push_back(12);
    v.push_back(23);
    v.push_back(55);
    v.push_back(31);

    cout << v.front();

    int tam = v.size();
    
    for(int i = 0; i<tam; i++)
        cout << v[i] << endl;

    // //inicializa com o tamanho 3 e com cada indice contendo o valor 0 ;
    // vector<int> vetor(3);
    // vetor[0] = 54;
    // vetor[1] = 11;
    // vetor[2] = 89;

    // cout << endl;
    // cout << "Vetor\n";

    // for(int i = 0; i<vetor.size(); i++)
    //     cout << vetor[i] << endl;


    return 0;
}
