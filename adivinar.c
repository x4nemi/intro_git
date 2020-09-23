#include <stdio.h> //Incluimos bibliotecas
#include <math.h>
#include <stdbool.h>

#define INI 1 //Definimos constantes
#define FIN 100

int adivinar(int ini, int fin); //Prototipo de la función de forma entera, que requiere dos enteros
 
int main(){ //Función principal
	int x = adivinar(INI, FIN); //Determinamos la variable que utilizaremos
	
	printf("El numero fue encontrado en %d intentos", x);
}

int adivinar(int ini, int fin){ //Inicio de la función "adivinar"
	int i = 0, rango = 0; 
	bool ad = false; 
    char r = 'x'; 
	
	printf("Adivinare un numero que estes pensando entre %d y %d en maximo %d intentos\n", INI, FIN, (int)log2(FIN-INI+1)+1); //Mandamos a pantalla el objetivo del programa
	getchar(); //Esperamos por una tecla
	
	rango=(INI + FIN) / 2;
	do{ //Ciclo de instrucciones, mientras que "ad" sea "FALSE"
		printf("Es mayor, menor o igual a %d (> / < / =)?\n", rango);
		scanf("%s", &r);
				
		
		if (r == '<'){
			fin = rango - 1;
		}
		else if(r == '>'){
			ini = rango + 1;
    	}
		else if(r == 'a'){
			ad = true;
		}
		
		rango = (ini + fin) / 2; 
		i++; 
		
	}while(ad == false);

	
	return i; //Cuando ad no sea FALSO, entonces retornamos el valor de i
}