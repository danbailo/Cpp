#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

  int a = 12;
  char c = 'a';
  bool t = true;
  float f = 23.12;
  double d = 231.235;

  int i;

  scanf("%d",&i);
  cout<< "o valor da variavel inteira a é: "<< a << endl;
  cout<< "o valor da variavel char c é: "<< c << endl;
  cout<< "o valor da variavel bool t é: "<< t << endl;
  std::cout<< "o valor da variavel float f é: "<< f << "\n";
  std::cout<< "o valor da variavel double d é: "<< d << endl;

  cout << endl;

  cout<< "memoria da variavel a é " << sizeof(a) << "bytes" << endl;
  cout<< "memoria da variavel bool é " << sizeof(t) << " bytes" << endl;
}
