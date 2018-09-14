#include <stdio.h>
#define TAM 3

void print_matriz(double *a,int tam){

	for(int i=0;i < tam;i++){
		for(int j=0; j < tam; j++){
			printf("%.3lf ",a[(i*3)+j]);
		}
		printf("\n");
	}	
	printf("\n");
}

void print_vetor(double *b, int tam){
	for(int i=0; i < tam;i++){
		printf("%.3lf\n",b[(i)]);
	}
	printf("\n");
}

int main(int argc, char const *argv[]){
	printf("\n");
	double a[TAM][TAM] = {{3,2,4},{1,1,2},{4,3,-2}};
	double b[TAM] = {1,2,3};

	printf("MATRIZ A\n");
	print_matriz((double*)a,TAM);
	
	printf("VETOR B\n");
	print_vetor((double*)b,TAM);

	for(int k=0; k < TAM; k++){
		
	}


	return 0;
}