#include "my_math.h"

int fatorial(int n){
	if(n <= 0)
		return 1;

	return n*fatorial(n-1);
}

float area_triangulo(float b,float h){
	return (b*h)/2;
}

float area_trapezio(float b,float B, float h){
	return ((b+B)*h)/2;
}