#include <iostream>

using namespace std;

class Pessoa{
private:
  string nome;
  int idade;
  int *parentes;
public:
  Pessoa(string nome,int idade){
    this->nome = nome;
    this->idade = idade;
    parentes = new int[100];
    cout << "Entrou no construtor " << nome << endl;
  }
  ~Pessoa(){
    cout << "Entrou no destrutor " << nome << endl;
    delete[] parentes;
  }
  void setNome(string nome){
    this->nome = nome;
  }
  string getNome(){
    return nome;
  }
  void setIdade(int idade){
    this->idade = idade;
  }
  int getIdade(){
    return idade;
  }
};

int main(){

  Pessoa p[3] = {
    {"Daniel",19}, {"Josué",19}, {"Lucas",22}
  };
  // Pessoa p;
  // p.setNome("Daniel");
  // p.setIdade(19);

  // cout << "Nome: " << p.getNome() << endl;
  // cout << "Idade: " << p.getIdade() << endl;

  return 0;
}
