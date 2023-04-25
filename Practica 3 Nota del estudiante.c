//Nota del estudiante del IPN
#include<stdio.h>
int main(){
	int n1, n2, n3, n4, MEDIA;
	    printf("Ingresa la primer puntuación entre 0 a 100: ");
	    scanf("%i", &n1);
	    printf("Ingresa la segunda puntuación entre 0 a 100: ");
	    scanf("%i", &n2);
	    printf("Ingresa la tercer puntuación entre 0 a 100: ");
	    scanf("%i", &n3);
        printf("Ingresa ultima puntuación entre 0 a 100: ");
        scanf("%i", &n4);
        MEDIA = (n1 + n2 + n3 +n4)/4;      
                    if(MEDIA>=0 && MEDIA<=59){
                    	printf("Tu total es de: %i pts. y tu nota final es 'E'", MEDIA);
                    }                  
                    else if(MEDIA>=60 && MEDIA<=69){
                    	printf("Tu total es de: %i pts. y tu nota final es 'D'", MEDIA);
                    }                
                	else if(MEDIA>=70 && MEDIA<=79){
                		printf("Tu total es de: %i pts. y tu nota final es 'C'", MEDIA);
                   	}                
                    else if(MEDIA>=80 && MEDIA<=89){
                    	printf("Tu total es de: %i pts. y tu nota final es 'B'", MEDIA);
                    }                
                    else if(MEDIA>=90 && MEDIA<=100){
                    	printf("Tu total es de: %i pts. y tu nota final es 'A'", MEDIA);
                    }   
                    else{                
                    printf("Se paso de los 100 puntos joven, vuelva a intentarlo");
                	}                
	return 0;
}