#include <iostream>
#include <vector>

using namespace std;

class Ponto{

public:
    int x,y;

    Ponto(int x, int y){
        this->x = x;
        this->y = y;
    }
};

int main(int argc, char const *argv[]){

    vector<Ponto> vetor;
    vector<Ponto>::iterator it;

    Ponto p1(1,2);
    vetor.push_back(p1);

    for(it = vetor.begin(); it != vetor.end(); it++)
        cout << "(" << (it)->x << "," << (it)->y << ")\n";

    return 0;
}
