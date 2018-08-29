#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main () {
  string line;
  ifstream myfile ("example.txt"); // ifstream = padrão ios:in

  vector<string> vetor;
  vector<string>::iterator it;

  if(myfile.is_open()){
    while (!myfile.eof()){    //enquanto end of file for false continua
      getline (myfile,line); // como foi aberto em modo texto(padrão)
                            //e não binário(ios::bin) pega cada linha
      vetor.push_back(line);

      cout << line << endl;
    }
    myfile.close();
    for(it = vetor.begin(); it != vetor.end(); it++)
        cout << *it << endl;

    // cout << vetor.front(); funciona;
    // for(int i=0; i < sizeof(vetor)-1; i++){ nao funciona
      // cout << vetor[i] << endl;

        
    }

  else{
    cout << "Unable to open file" << endl; 
  } 

  return 0;
}