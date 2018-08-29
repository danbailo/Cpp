#include <iostream>

using namespace std;

class ClasseBase{
private:
    int n;
protected:
    int n1, n2;
public:
    int n3, n4;

    ClasseBase(){
        n = 0;
        n1 = 1;
        n2 = 2;
        n3 = 3;
        n4 = 4;
    }
};
//na herança public, herda a interface inteira da classe digitada
class SubClasse1 : public ClasseBase{
public:
    void foo(){
        cout << "SubClasse1: " << endl;
        //cout << n << endl;
        cout << n1 << endl << n2 << endl;
        cout << n3 << endl << n4 << endl;
    }
};

// como é derivação privada, todos os membros que derivam de outra classe sao privados
// para os outros, mesmo estando em public dentro do metodo;
class SubClasse2 : private ClasseBase{
public:
    void foo(){
        cout << "SubClasse2: " << endl;
        // cout << n << endl;
        cout << n1 << endl << n2 << endl;
        cout << n3 << endl << n4 << endl;
    }
    int getN3(){
        return n3;
    }
};

class Pai1{
public:
    void foo(){
        cout << "Oi, eu sou o Pai1\n";
    }
};

class Pai2{
public:
    void foo(){
        cout << "Oi, eu sou o Pai2\n";
    }
};

//HERANÇA MÚLTIPLA;
class Filha : public Pai1, public Pai2{

};

int main(int argc, char const *argv[]){
    
    SubClasse1 sub1;
    SubClasse2 sub2;

    sub1.foo();
    sub2.foo();

    cout << "SubClasse1 na main: " << endl;
    cout << sub1.n3 << endl << sub1.n4 << endl;

    cout << "SubClasse2 na main: " << endl;
    cout << sub2.getN3() << endl;

    Filha f;
    //f.foo(); -> ambiguidade pois nas duas heranças possuem a mesma funcao

    //operador de escopo; ("::")
    f.Pai1::foo();
    f.Pai2::foo();

    return 0;
}
