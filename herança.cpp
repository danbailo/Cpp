#include <iostream>
#include <string.h>

using namespace std;

class Animal{
private:
  char *nome;

public:
  Animal(const char* nome){
    cout << "Construindo Animal" << endl;
    this->nome = new char[strlen(nome)+1];//caractere '/0'
    strcpy(this->nome,nome);
  }
  ~Animal(){
    cout << "Destruindo Animal" << endl;
    delete[] nome;
    nome = 0;
  }
  const char *getNome(){
    return nome;
  }
};

class Cachorro : public Animal{
private:
  int idade;
public:
  Cachorro(const char *nome) : Animal(nome){
    cout << "Construindo Cachorro" << endl;
    idade = 0;
  }
  void setIdade(int idade){
    this->idade = idade;
  }
  int getIdade(){
    return idade;
  }
};

int main(){

  Cachorro c("bob");

  cout << "Nome: " << c.getNome() << endl;
  c.setIdade(8);
  cout << "Nome: " << c.getIdade() << endl;

  return 0;
}
