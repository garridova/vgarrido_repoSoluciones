/* Algoritmo Narrado
 *Crear una funcion que retorne en numero
 *Iniciar la funicion int main 
 *Realizar numeros aleatorios
 *Declarar variables de tipo y char y de tipo int 
 *Realizar ciclo while para consultar al usuario si desea seguir jugando
 *Ocupar condicionales if para mostrar si ha ganado o no  
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_aleatorio (){
	int numero;
	
	numero= (rand()%100)+1;
	
	return numero;
}	

int main (){
	int a,b;
	int ganar=0;
	int perder=0;
	char apuesta, fin='S';
	srand(time(NULL));
	
	a = num_aleatorio ();
	b = num_aleatorio ();
	
	
	while (fin == 'S'){
		
		printf ("Apuestas por A o B?");
		scanf ("%c", &apuesta);
		printf ("A sacado %d en A\n", a);
		printf ("A sacado %d en B\n ", b);
		
		if (apuesta=='A' && a>b){
			printf ("Has ganado\n");
			ganar = ganar + 1;
		}
		else if (apuesta=='B' && b>a){
			printf ("Has ganado\n");
			ganar = ganar + 1;
		}
		else {
			printf ("Has perdido\n");
			perder = perder +1;
		}
		
		
		
		
		printf ("Llevas %d partidas ganadas y %d partidas perdidas\n", ganar, perder);
		
		while (getchar()!='\n');
		printf ("Quieres apostar otra vez ?(S/N): ");
		scanf ("%c",&fin);
		printf ("%c", fin);
		
	
	}

}
