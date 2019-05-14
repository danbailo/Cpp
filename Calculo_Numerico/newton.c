#include <stdio.h>
#include <math.h>
#include <time.h>
#define epsilon 2.71828182846

struct timespec TIMER_START,TIMER_END;

long unsigned int timer(int f){
    if(f){
        clock_gettime(CLOCK_MONOTONIC_RAW, &TIMER_START);
        return 0;  
    }
    clock_gettime(CLOCK_MONOTONIC_RAW, &TIMER_END);
    return (TIMER_END.tv_sec - TIMER_START.tv_sec) * 1000000000 + (TIMER_END.tv_nsec - TIMER_START.tv_nsec);
}

double f(double x){
    return pow(x,4)+2*pow(x,3)-13*pow(x,2)-14*x+24;
}

double flinha(double x){
    return 4*pow(x,3)+6*pow(x,2)-26*x-14;
}

int main(int argc, char const *argv[]){
    
    timer(1);//start

    double x,e;
    int it=0;

    x = 0.5;
    e = 0.00001;

    while((fabs(f(x))>e)){
        x += -(f(x)/flinha(x));
        it++;
    }

    printf("A raiz do intervalo e %e\n", x);
    printf("A f(x) e %e\n", f(x));
    printf("Iteracoes: %d\n",it);
    unsigned long int t=timer(0);
    printf("Tempo gasto: %lu ns\n",t); //end  

    return 0;
}
