#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double f(double x){
    return exp(x*log(x))*pow(x,3)-(9*x)+3;
}
double flinha(double x){
    return f(x+1e-12)-(f(x))/1e-12;
}
int main(int argc, char const *argv[]){       
    double a,b,e,x;
    a=0.0;
    b=1.0;
    x=(a+b)/2.0;
    e=0.001;
    int k=0;
    // while(fabs(f(x))>=e){ //y
    while((b-a)>=e){ //x
        if(f(x)>=0){
            a=x;
        }
        else{
            b=x;
        }
        x=(a+b)/2.0;
        printf("x(%i)=%lf\n",k,x);
        k++;
    }
    printf("xbarra=%lf\n",x);
    printf("f(xbarra)=%lf\n",f(x));


    return 0;
}
