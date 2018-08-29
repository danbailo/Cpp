#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){
    int i, Nmax;
    double Xa, Xb, Xm, Epsilon;
    i=0;

    Xa = StrToFloat(EditXa­>Text);
    Xb = StrToFloat(EditXb­>Text);

    Epsilon = StrToFloat(EditEpsilon­>Text); 

    Nmax = StrToInt(EditNmax>Text); 
    do{ 
        Xm=(Xa+Xb)/2; 
        if (f(Xa)*f(Xm)<0){
            Xb=Xm;
        } 
        else {
            Xa=Xm;
        } 
        i++; 
    } 
    while ((fabs(f(Xm))>Epsilon)&&(i<Nmax)); 
    Memo1­>Lines­ >Append(FloatToStr(Xm) + " : " + IntToStr(i)); 
    return 0;
}
