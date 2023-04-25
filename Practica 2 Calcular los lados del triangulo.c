/*Calcular cualquier lado de un triangulo 
      Versión IPN*/
#include<stdio.h>
#include<math.h>
int main(){
float CATA=0, CATO=0, HIPO=0;
int n1;
     printf("\nHipotenusa: 1\nCateto Opuesto: 2\nCateto Adyasente: 3\n");
     printf("Selecciona el lado del triangulo a encontrar: ");
     scanf("%i", &n1);
               switch(n1){
               case 1:
                    printf("Da valor del Cateto Opuesto: ");
                    scanf("%f", &CATO);
                    printf("Da valor del Cateto Adyasente: ");
                    scanf("%f", &CATA);
                    HIPO = sqrt(pow(CATO,2) + pow(CATA,2));
                    printf("El resultado de la hipotenusa es: %.2f", HIPO);
                    break;
               case 2:
                    printf("Da el valor del Cateto adyasente: ");
                    scanf("%f", &CATA);
                    printf("Da el valor de la hipotenusa: ");
                    scanf("%f", &HIPO);
                    CATO = sqrt(pow(HIPO,2) - pow(CATA,2));
                    printf("El resultado del Cateto opuesto es: %.2f", CATO);
                    break;
               case 3:
                    printf("Da el valor del Cateto Opuesto: ");
                    scanf("%f", &CATO);
                    printf("Da el valor de la Hipotenusa: ");
                    scanf("%f", &HIPO);
                    CATA = sqrt(pow(HIPO,2) - pow(CATO,2));
                    printf("El resultado del Cateto adyasente es: %.2f", CATA);
                    break;
            }
	return 0;
}
//No solo calcule la hipotenusa, sino que doy la opción de elegir el lado a calcular.
/*Se utilizo la función "sqrt" para calcular raiz cuadrada y "pow" para elevar al cuadrado que
estan dentro de la libreria math.h*/