#include <iostream>

using namespace std;

class ClasseMae{ // construtores n podem ser virtuais
public:
  virtual void mostrarMensagem(){ // ligacao tardia, o padrao do cpp é ligacao prematura
    cout << "Olá, eu sou a classe mae" << endl;
  }
};

class ClasseFilha : public ClasseMae{
public:
  virtual void mostrarMensagem(){ // nao e necessario, porem e usual
    cout << "Olá, eu sou a classe filha" << endl;
  }
};

void foo(ClasseMae *p){
  p->mostrarMensagem();
}

int main(){

  ClasseMae mae;
  ClasseFilha filha;

  foo(&mae);
  foo(&filha); // eu posso passar um tipo filha porque filha recebe herança da classe mae
              // se eu passo ClasseFilha na funcao foo, eu so poderia passar um tipo filha
             //  porque filha e tipo mae mas mae nao e tipo filha;
  return 0;
}
