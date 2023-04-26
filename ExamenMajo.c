//Examen
#include <stdio.h>

int main(){ 
    float sum=0, numerador, denominador, valor;
    int caso, n, i, contador=0;
    printf("Ingrese la opcion deseada:\n1. Cuenta regresiva\n2. Suma sucesiva con valores\n3. Nombre completo, boleta y edad\n4. Suceción de números racionales");
    scanf("%d", &caso);

    switch(caso) {
        case 1:
            printf("Ingresa un número: ");
            scanf("%d", &n);
                for (i = n; i >= 0; i--) {
                printf("%d\n", i);
            }
            break;           
        case 2:
        do {
        printf("Digite un número: ");
        scanf("%f", &valor);
        if (valor > 0) {
            sum += valor;
            contador++;
        }
        } while (valor > 0);

        float promedio = sum/ contador;
        printf("La suma de todos los valores introducidos es: %.1f\n", sum);
        printf("El promedio de los valores introducidos es: %.1f\n", promedio);
        printf("La cantidad de valores digitados es: %.1d\n", contador);
        break;
            case 3:
            int boleta, edad, anio=0;
            printf("Ingrese su no. de boleta: ");
            scanf("%d", &boleta);
            printf("Ingrese su edad: ");
            scanf("%d", &edad);
            anio = 2023 - edad;
            printf("Nombre: Maria Jose Ortiz \nNo. de boleta: %d\nEdad: %d\nEl año en el que naciste es: %d", boleta, edad, anio);
            break;     
        case 4:
             float numerador, denominador;
            printf("Ingresa la cantidad de términos que deseas generar: ");
            scanf("%d", &n);
            printf("Ingrese la cantidad de valores en el numerador: ");
            scanf("%f", &numerador);
            printf("Ingrese la cantidad de valores en el denominador: ");
            scanf("%f", &denominador);
                for (i = 0; i < n; i++) {
                printf("%.0f/%.0f + ", numerador, denominador);
                numerador += 1;
                denominador -= 1;
                }
            break;
        default:
            printf("La opción que digito no es la correcta");
            break;    
        }
    return 0;
}