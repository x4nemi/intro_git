#include <stdio.h> //Incluimos bibliotecas
#include <math.h>

#define INI 1 //Definimos constantes
#define FIN 100

#define FALSO 0
#define TRUE 1

int adivinar(int ini, int fin); //Prototipo de la función de forma entera, que requiere dos enteros

int adivinar(int ini, int fin){ //Inicio de la función "adivinar"
	int i=0;
	int rango; 
	int ad=FALSO; //Determinamos las variables enteras
    char r; //Determinamos las variables de carácteres
	
	printf("Adivinare un numero que estes pensando entre %d y %d en maximo %d intentos\n", INI, FIN, (int)log2(FIN-INI+1)+1); //Mandamos a pantalla el objetivo del programa
	getchar(); //Esperamos por una tecla
	
	rango=(INI+FIN)/2;
	do{ //Ciclo de instrucciones, mientras que "ad" sea "FALSE"
		
		printf("Es mayor, menor o igual a %d?\n", rango);
		scanf("%s", &r);
				
		
		if (r=='<'){
			fin=rango-1;
		}
		else if(r=='>'){
			ini=rango+1;
    	}
		else if(r=='a'){
			ad=TRUE;
		}
		
		rango=(ini+fin)/2; 
		i=i+1; 
		
	}while(ad==FALSO);

	
	return i; //Cuando ad no sea FALSO, entonces retornamos el valor de i
}
 
int main(){ //Función principal
	int adi=adivinar(INI, FIN); //Determinamos la variable que utilizaremos
	
	printf("El numero fue encontrado en %d intentos", adi);
}