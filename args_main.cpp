#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	
	cout << "argc " << argc << endl;

	cout << "argv " << argv[0] << endl;

	cout << "\nQuantidade de argumentos: " << argc << endl;
	cout << "\nArgumentos passados: " << argc << endl;

	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;

	return 0;
}