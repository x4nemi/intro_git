#include <stdio.h> 
#include <math.h>

//Rango
#define INI 1 
#define FIN 100

#define FALSE 0
#define TRUE 1


int adivinar(int ini, int fin); 

int main(){ 
	int x = adivinar(INI, FIN); 
	
	printf("El numero fue encontrado en %d intentos", x);

    return 0;
}

int adivinar(int ini, int fin){
	int i = 0, rango = 0; 
	int ad = FALSE; //Determinamos las variables enteras
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
		
	}while(ad==FALSE);

	
	return i; 
}
 