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
    
    //vector de ponteiros para objetos da classe ponto
    vector<Ponto*> vetor;
    vector<Ponto*>::iterator it;
    
    Ponto p4(1,2);
    
    Ponto* p1 = new Ponto(1,2);
    Ponto* p2 = new Ponto(3,4);

    vetor.push_back(p1);
    vetor.push_back(p2);

    for(it = vetor.begin(); it != vetor.end(); it++)
        cout << "(" << (*it)->x << "," << (*it)->y << ")\n";


    cout << "\n";
    cout << "FOR_EACH\n";
    for(Ponto* p:vetor){
        cout << "(" << p->x << "," << p->y << ")\n";             
    }


    delete p1;
    cout << p4.x;

    return 0;
}
