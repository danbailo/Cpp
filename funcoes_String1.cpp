#include<iostream>
#include<string>

using namespace std;

void ShowMessage(const char *str){
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    string nome = "daniel";
    
    cout << "String: " << nome << endl;
    cout << "Tamanho: "<< nome.length() << endl;
    cout << nome.at(3) << endl; // "Pega" o caratere no indice digitado
    cout << nome.front() << endl; // "Pega" o primeiro caractere da string
    cout << nome.back() << endl; // "Pega" o último caractere da string

    //Função para concatenar strings
    nome.append(" bail");
    cout << nome << endl;

    //Função para adicionar um char na string;
    nome.push_back('o');
    cout << nome << endl;

    //Função para inserir uma string a partir do indice digitado;
    nome.insert(1,"fodao");
    cout << nome << endl;

    //Inserir uma string a partir do final de uma outra string;
    nome.insert(nome.size()," fodao");
    cout << nome << endl;

    //Função para apagar caracteres, (inicio,fim); <- range, no caso intervalo;
    // no inicio e intervalo fechado e no final é intervalo aberto;
    nome.erase(0,18);
    cout << nome << endl;


    //nome.erase(0,nome.size()); // apaga toda a string
    nome.clear();//retorno vazio e limpa a string;
    if(nome.empty())// retorna true se for vazia e false se não estiver vazia;
        cout << "String vazia!\n";
    else
        cout << "String NÃO vazia!\n";


    nome = "Daniel";
    //Converte uma string para char, passa uma string e retorna a mesma em um *char;
    ShowMessage(nome.c_str());

    nome.replace(0,nome.size(),"Bailo");
    cout << nome << endl;

    //Comparar substrings
    size_t achou = nome.find("bailo");

    if(achou != string::npos)
        cout << "Achei!\n";
    else
        cout << "NÃO Achei!\n";

    
    cout << "Digite seu nome: ";
    string meu_nome;
    // Função para pegar "espaços" da entrada;
    getline(cin,meu_nome);
    cout << "Nome digitado: " << meu_nome << endl;

    //Concatenar strings, no caso é uma adição;
    meu_nome += " lindo";

    cout << meu_nome << endl;


    return 0;
}
