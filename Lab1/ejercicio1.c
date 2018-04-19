/*ALGORITMO NARRADO.
 *Declarar seis variables tipo int.
 *Declarar una variable tipo char.
 *Pedir y guardar datos.
 *Iniciar ciclo (while).
 *Dar opcion para poder votar.
 *Pedir y guardar datos. 
 *Dar opciones de candidatos a presidentes.
 *Iniciar nuevamente un ciclo (while) para preguntar si se desea continuar.
 *Ingresar datos de las votaciones a los candidatos para luego de contar votos definir un ganador. 
 *Se returna en 0.
 */
 
 #include <stdio.h>
#include <stdlib.h>
int main ()
{
	int candidatoa= 0;
	int candidatob= 0;
	int candidatoc= 0;
	int voto;
	int votos=0;
	char fin='n';
	int votos_nulos=0;
	
	while (fin != 'f' ){
		printf ("Ingrese voto:");
		scanf ("%d",&voto);
		
		switch (voto)
		{
			case 1:
				candidatoa = candidatoa +1;
				votos++;
				break;
			case 2:
				candidatob = candidatob + 1;
				votos++;
				break;
			case 3:
				candidatoc = candidatoc +1;
				votos++;
				break;
			default:
				printf ("Voto nulo");
				votos_nulos++;
				votos++;
		}
		while (getchar() != '\n');
		printf ("¿Desea continuar?:");
		scanf ("%c", &fin);
	}	
	printf ("\n\nVotos candidato 1: %d\n", candidatoa);
	printf ("Votos candidato 2: %d\n", candidatob);
	printf ("Votos candidato 3: %d\n", candidatoc);
	printf ("Total de votos: %d\n", votos);
	printf ("Votos nulos: %d\n", votos_nulos);
	
	if (candidatoa >= candidatob && candidatoa > candidatoc){
		printf ("Presidente electo: candidatoa");
	}
	else if (candidatoc >= candidatoa && candidatoc > candidatoa){
		printf ("Presidente electo: candidatob");
	}
	else if (candidatoc >= candidatoa && candidatoc > candidatoa){
		printf ("Presidente electo:candidatoc");
	}
	else{
		printf ("No se puede determinar");
	} 
	return 0;
} 
