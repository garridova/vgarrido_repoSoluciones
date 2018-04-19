/* Algoritmo narrado
 *Declarar cuatro variables de tipo int.
 *Abrir un ciclo for para pedir al usuario ingresar los resultados del equipo y del equipo contrario.
 *Agregar un condicional para cuando el equipo gane, pierda y empate, de manera que si el equipo gana recibira tres puntos, si empata 1 y si pierde no ganara ninguno.
 *Mediante un printf mostrar al usuario el total de puntos tienen al finalizar la temporada con los cinco partidos.
 *Se returna en 0.
 */
#include <stdio.h>
int main ()
{
	int resultadocontrario=0;
	int resultadoequipo=0;
	int totalpuntos=0;
	int i=0;
	 
	for (i=0; i<5; i++){
	printf ("Ingrese resultado del equipo: ");
	scanf ("%d", &resultadoequipo);
	printf ("Ingrese resultado del equipo contrario: ");
	scanf ("%d", &resultadocontrario);
	
	if (resultadoequipo > resultadocontrario) {
		totalpuntos+=3;
		printf ("Gano\n");
	}
	else if (resultadoequipo == resultadocontrario){
		totalpuntos++;
		printf ("Empate\n");
	}
	else { 
		printf ("Perdio\n");
	}
}	
	printf ("El total de puntos hasta la quinta temporada es: %d", totalpuntos);
	
	
		return 0;
}	
			
