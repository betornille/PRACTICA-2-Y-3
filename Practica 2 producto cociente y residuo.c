//Calcular producto, cociente y residuo
#include<stdio.h>
int main(){
     int n1, n2, PRODUC=0, DIV=0, RES=0;
          printf("Ingrese primer número a operar: ");
          scanf("%i", &n1);
          printf("Ingrese segundo número a operar: ");
          scanf("%i", &n2);
          PRODUC = n1 * n2;
          DIV = n1 / n2;
          RES = n1 % n2;
     printf("\n-El producto de la multiplicación es: %i", PRODUC);
     printf("\n-El resultado de la división es: %i", DIV);
     printf("\n-Residuo de la división es: %i", RES);
     return 0;
}

/*Hay un caso en la operación del residuo,
  donde si el dividendo es menor que el divisor,
  el resultado va a ser el mismo divisor.
  Ejemplo; 4/7 el resultado de el residuo(%) es 4.
  Y en la división es el mismo 0*/