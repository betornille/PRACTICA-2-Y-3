//Selectiva doble: calcular f(x) para un valor dado en x.
#include<stdio.h>
int main(){
    float x;
    printf("Da un número que evalue a f(x): ");
    scanf("%f", &x);
    if(x < 0 ){
        x *= x;
        printf("El valor de x2 es: %.1f\n", x);
    }
    else{
    	x *= x * x;
    	printf("El valor de x3 es: %.1f", x);
    }
	return 0;
}
/*Si la condición de "if" es falsa entonces el valor que el usuario dio es 
  mayor o igual que 0 y por lo tanto evaluara ese mismo número al cubo.*/