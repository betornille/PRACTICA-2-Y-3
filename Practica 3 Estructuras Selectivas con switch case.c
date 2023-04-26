//Pedir un carácter y determinar si es una vocal, mostrar cual es. Switch case.
#include<stdio.h>
int main(){
    char a, e, i, o, u, r;
	printf("Ingresa un caracter para determinar si es vocal: ");
	scanf("%c", &r);
	        switch(r){
                case 'a':printf("Tu caracter es la vocal 'a'");
	                    break;
	            case 'e':printf("Tu caracter es la vocal 'e'");
	                    break;
	            case 'i':printf("Tu caracter es la vocal 'i'");
	                    break;
	            case 'o':printf("Tu caracter es la vocal 'o'");
	                    break;
	            case 'u':printf("Tu caracter es la vocal 'u'");
	                    break;
	            default:printf("Este caracter no es una vocal");
	            	    break;
	        }
    return 0;
}