//Pus ya estuvo
#include <stdio.h>

int main(){ 
    float sum=0, numerador, denominador, valor;
    int caso, n, i;
    printf("Ingrese la opcion deseada:\n1. Calcular la suma en serie\n2. Suma total de valores\n3. Contador descendente\n");
    scanf("%d", &caso);

    switch(caso) {
        case 1:
            printf("Ingresa la cantidad para evaluar de forma sucesiva: ");
            scanf("%d", &n);
            numerador = 1;
            denominador = 2;
            for (i = 0; i <= n; i++) {
                printf("\tTérmino %d: ", i+1); 
                printf("%.0f/%.0f\n ", numerador, denominador); 
                numerador++;
                denominador += 2;
            }
            break;
        case 2:
            do {
                printf("Digita un número : ");
                scanf("%f", &valor);     
                if (valor >= 0) {
                    sum += valor;
                }
            } while (valor >= 0);
            printf("La suma de todos los valores introducidos es: %.1f", sum);
            break;
        case 3:
            printf("Ingresa un número: ");
            scanf("%d", &n);
                for (i = n; i >= 0; i--) {
                printf("%d\n", i);
            }
            break;
        default:
            printf("Elige la opción correcta, no seas meco");
            break;    
        }
    return 0;
}