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


double secante(double x0, double x1){
    return ((x1*f(x0)) - (x0*f(x1)) )/(f(x0)-f(x1));
}

int main(int argc, char const *argv[]){

    timer(1);

    double x0,x1,e,x;
    int it=0;

    x0 = 0.0394;
    x1 = 10000;
    e = 0.00001;

    x = secante(x0,x1);

    // printf("%lf\n", x);
    if((f(x0)*f(x1)) <= 0){

    while((fabs(f(x))>e)){

        x = secante(x0,x1);

        x0 = x1;
        x1 = x;

        it++;
    }

    printf("A raiz do intervalo e %e\n", x);
    printf("A f(x) e %e\n", f(x));
    printf("Iteracoes: %d\n",it);
    unsigned long int t=timer(0);
    printf("Tempo gasto: %lu ns\n",t); //end  
    }
    else{
        printf("oii\n");
    }
    return 0;
}
