#include <iostream>
#include <list>


using namespace std;

template<class T>
class Fila{
private:
    list<T> fila;
public:
    void insere(const T& e){
        fila.push_back(e);
    }

    bool vazia(){
        return fila.empty();
    }

    T remover(){
        if(!this->vazia()){
            T e = fila.front();
            fila.pop_front();
            return e;
        }
        throw "Fila vazia!";
    }

    T frente(){
        if(!this->vazia()){
            return fila.front();
        throw "Fila vazia!";
        }
    }

     T fim(){
        if(!this->vazia()){
            return fila.back();
        throw "Fila vazia!";
        }
    }
    int tamanho(){
        return fila.size();
    }
    
    // T print(){
    //     if(!this->vazia()){
    //         for(it = fila.begin(); it != fila.end(); it++)
    //             cout << it << endl;
    //     }
    //     throw "Fila vazia!";
    // }
};

int main(int argc, char const *argv[]){

    Fila<double> f1;

    cout << "ANTES DE INSERIR ELEMENTOS:\n";
    if(f1.vazia())
        cout << "Fila vazia!\n";
    else
        cout << "Fila NÃO vazia!\n";

    try{
        double e = f1.remover();
        cout << "Removendo elemento: " << e << endl;
    }catch(const char* msg){
        cerr << "ERRO: " << msg << endl;
    }

    f1.insere(5.67);
    f1.insere(2.19);
    f1.insere(9.22);

    cout << "DEPOIS DE INSERIR ELEMENTOS:\n";
    if(f1.vazia())
        cout << "Fila vazia!\n";
    else
        cout << "Fila NÃO vazia!\n";

    try{
        cout << "Elemento da frente: " << f1.frente() << endl; 
    }catch(const char* msg){
        cerr << "ERRO: "<< msg << endl;
    }

    try{
        cout << "Elemento do final: " << f1.fim() << endl; 
    }catch(const char* msg){
        cerr << "ERRO: "<< msg << endl;
    }

    try{
        double e = f1.remover();
        cout << "Removendo elemento: " << e << endl; 
    }catch(const char* msg){
        cerr << "ERRO: "<< msg << endl;
    }

    try{
        cout << "Elemento da frente: " << f1.frente() << endl; 
    }catch(const char* msg){
        cerr << "ERRO: "<< msg << endl;
    }


    return 0;
}
