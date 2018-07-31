

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define dia 7
#define hora 24
#define dia_por_semana 168

void llenado(int temperatura[dia][hora]){
	int a, b;
	int valor;

	for (a=0; a<dia; a++){
		for (b=0; b<hora; b++){
			valor= (rand()%40)+1;
			temperatura[a][b]= valor;
		}
	}
}

void Imprimir(int temperatura[dia][hora]){
	int a, b; 
	
	for (a=0; a<dia; a++){
		printf ("\n");
		for (b=0; b<hora; b++){
			printf (" %d ", temperatura[a][b]);
		}
	}
}

void temperatura_minima (int temperatura[dia][hora]){
	int a, b; 
	int menor= 50;
	int minima[dia];
	for (a=0; a<dia; a++){
		menor=50;
		for (b=0; b<hora; b++){
			if (menor>temperatura[a][b]){
				menor=temperatura[a][b];
			}
		}
		minima [a] = menor;
		printf ("\nLa menor temperatura del dia %d es %d °C", a+1, menor);
	}
	
	printf ("\n");
	for (a=0; a<dia; a++){
		if (menor>minima[a]){
			menor=minima[a];
			}
		
	}
	printf ("\nLa menor temperatura de la semana es %d °C\n", menor);
}

void temperatura_maxima(int temperatura[dia][hora]){
	int maxima[dia];
	int a, b;
	int mayor=0;
	for (a=0; a<dia; a++){
		mayor=0;
		for (b=0; b<hora; b++){
			if (mayor<temperatura [a][b]){
				mayor= temperatura [a][b];
			}
		}
		maxima [a] = mayor;
		printf ("\nLa mayor temperatura del dia %d es %d °C", a+1, mayor);
	}
	for (a=0; a<dia; a++){
		if (mayor<maxima[a]){
			
			mayor=maxima[a];
			}
	}
	printf ("\n\nLa mayor temperatura de la semana es %d °C\n", mayor);
}

void temperatura_media(int temperatura[dia][hora]){
	int a, b;
	int media_dia;
	int dia_mayor_treinta=0;
	int suma_semanal=0;
	for (a=0; a<dia; a++){
		int suma=0;
		for(b=0; b<hora; b++){
			suma+= temperatura [a][b];
			suma_semanal+= temperatura [a][b];
		
		}
		media_dia = suma/hora	;
		printf("\nTemperatura media de la dia %d es %d", a+1, media_dia);
		if (media_dia > 30){
				dia_mayor_treinta+=1;
			}
	}
	
	printf("\n\nTemperatura media de la semana es, %d\n", suma_semanal/dia_por_semana);
	printf ("Dias que superan la media de 30 °C: %d", dia_mayor_treinta);
}

int main (){
	srand(time(NULL));
	int temperatura[dia][hora];
	llenado(temperatura);
	Imprimir (temperatura);
	temperatura_maxima (temperatura);
	temperatura_minima (temperatura);
	temperatura_media (temperatura);

	
	
	return 0;
}
