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


int main(int argc, char const *argv[]){
    
    timer(1);

    double x0,x1,e,x;
    
    x0 = 0;
    x1 = 10000;
    e = 0.00001;
    int k = 0;

    if((f(x0)*f(x1)) <= 0){
        while(fabs(x1-x0) > e){
            x = (x0+x1)/2.0;
            if((f(x0)*f(x)) <= 0) x1 = x;
            else x0 = x;
            k++;
        }
        
        printf("A raiz do intervalo e %e\n", x);
        printf("A f(x) e %e\n", f(x));
        printf("Iteracoes: %d\n",k);
        unsigned long int t=timer(0);
        printf("Tempo gasto: %lu ns\n",t);
        return 0;
    }
    
    printf("Nao ha raizes no intervalo dado\n");
    unsigned long int t=timer(0);
    printf("Tempo gasto: %lu ns\n",t);
    return 0;
}