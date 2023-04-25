// E=mc²
#include<stdio.h>
#include<math.h>
#define P 10
#define C 2.997925 * pow(P,10) //<--tambien se puede expresar asi "C 2.997925e10"
int main(){
	float M, E;
	printf("Ingresa la masa en gramos: ");
	scanf("%f", &M);
	E = M * pow(C,2);
    printf("La energía producida es: %.3e ergios", E);
	return 0;
}