#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    
    vector<int> vetor(3);

    vetor[0] = 54;
    vetor[1] = 11;
    vetor[2] = 89;

    // vetor[].push_back(5); da errado;

    // cout << *it << endl;

    vector<int>::iterator it;
    for(it = vetor.begin(); it != vetor.end(); it++)
        cout << *it << endl;

    return 0;
}
