#include <iostream>

using namespace std;

class Pessoa{
private:
    int idade;
    int *vet;
public:
    Pessoa(int idade){
        this->idade = idade;
        vet = new int[10];
    }
    ~Pessoa(){
        delete [] vet;
    }
    int getIdade(){
        return idade;
    }
};

int main(int argc, char const *argv[]){
    int *p = new int[10];

    *p = 1;
    *(p+1) = 2;
    *(p+2) = 3;
    
    cout << *p << endl << *(p+1) << endl << *(p+2) << endl;


    for(int i = 0; i<3; i++)
        cout << *(p+i) << endl;

    delete p;
    
    // se usar new tem q usar o delete;
    Pessoa *pessoa = new Pessoa(20);
    cout << pessoa->getIdade() << endl;
    delete pessoa;

    return 0;
}
