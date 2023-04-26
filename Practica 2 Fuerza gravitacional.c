//Fuerza gravitacional 
#include<stdio.h>
#include<math.h>
#define P 10
#define G 6.673 * pow(P,-8) // <--otra forma de definir G 6.6731e-8
int main(){
        float masa1, masa2, d, F;
        printf("Da el peso de la primer masa en kg: ");
        scanf("%f", &masa1);
        printf("Da el peso de la segunda masa en kg: ");
        scanf("%f", &masa2);
        printf("Da la distancia entre las 2 masas en metros: ");
        scanf("%f", &d);
        F = (G * masa1 * masa2) / pow(d,2);
        printf("La fuerza gravitacional es: %.3e Newtons", F);
	return 0;
}