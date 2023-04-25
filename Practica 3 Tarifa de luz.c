//Calcular la tarifa de luz
#include<stdio.h>
#define T1 1.2
#define T2 1.0
#define T3 0.9
int main(){
          float CE, tasapago;
          printf("Introduzca el gasto de corriente electrica: ");
          scanf("%f", &CE);
               if(CE<1000)
               {
                    tasapago = T1;
               }
               if(CE>=1000 && CE<=1850)
               {
                    tasapago = T2;
               }
               if(CE>1850)
               {
                    tasapago = T3;                    
               }
          printf("La tasa a pagar es: %.1f", tasapago);
     return 0;
}
/*Para el primer caso y el ultimo tube que asignar operadores "menor que" y  "mayor que", ya que
  el programa se confunde con la condición de en medio al tener valores iguales. Si no le pongo
  esos operadores el resultado la "0" por que no reconose que condición tomar.*/