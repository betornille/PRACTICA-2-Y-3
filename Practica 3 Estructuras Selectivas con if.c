//Pedir un carácter y determinar si es una vocal, mostrar cual es. If else.
#include<stdio.h>
int main(){
    char n1 = 'a';
    char n2 = 'e';
    char n3 = 'i';
    char n4 = 'o';
    char n5 = 'u';
    char n6 = 'r';
	printf("Ingresa un caracter para determinar si es vocal: ");
	scanf("%c", &n6);
	        if(n6 == n1){
                printf("Tu caracter es la vocal 'a'");
	        }
	        else if(n6 == n2){
                printf("Tu caracter es la vocal 'e'");
	        }
	        else if(n6 == n3){
	        	printf("Tu caracter es la vocal 'i'");
	        }
	        else if(n6 == n4){
	        	printf("Tu caracter es la vocal 'o'");
	        }
	        else if(n6 == n5){
	        	printf("Tu caracter es la vocal 'u'");
	        }
	        else{
	        	printf("Este caracter no es una vocal");
	        }
    return 0;
}