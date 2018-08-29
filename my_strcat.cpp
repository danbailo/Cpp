#include <iostream>

using namespace std;

int my_strlen(char *str){
	int tam = 0;
			//aponta para o proximo elemento da string  
	while(*str++ != '\0')
		tam++;

	return tam;
}

char *my_strcat(char *dest, char *orig){
	int tam = my_strlen(dest) + my_strlen(orig);
	char *parray = new char[tam];
	char *array = parray;
	while(*dest != '\0'){
		*array = *dest;
		array++;
		dest++;
	}
	while(*orig != '\0'){
		*array = *orig;
		array++;
		orig++;
	}
	*array = '\0';
	return parray;
}

int main(int argc, char const *argv[]){
	
	char *nome1 = new char[100]; //alocando espaço na memoria para 100 caracteres 
	char *nome2 = new char[100]; //alocando espaço na memoria para 100 caracteres

	cout << "Digite o primeiro nome" << endl;
	cin >> nome1;
	cout << "Digite o segundo nome" << endl;
	cin >> nome2;


	cout << "Tamanho do primeiro nome " << my_strlen(nome1) << endl;
	cout << "Tamanho do segundo nome " << my_strlen(nome2) << endl;

	cout << my_strcat(nome1,nome2) << endl;

	return 0;
}