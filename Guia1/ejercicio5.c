#include <stdio.h>
int main ()
{
	char dinosaurio[50];
	float peso;
	float longitud;
	float libras;
	float pies;
	
	printf ("Ingresa nombre del dinosaurio:\n");
    scanf ("%s", dinosaurio);
    printf ("\n");
    printf ("Ingrese libras:\n");
    scanf ("%f", &libras);
    printf ("\n");
    printf ("Ingrese la medida del pies:\n");
    scanf ("%f", &pies);
    
    printf ("\n");
    peso= (libras * 0.45);
    printf ("El peso del dinosaurio es: %.2f kilogramos\n", peso);
    printf ("\n");
    longitud= (pies * 0.3048);
    printf ("La longitud del dinosaurio es: %.2f metros\n", longitud);
    printf ("\n");
    printf ("El nombre del dinosaurio es: %s\n", dinosaurio);
    
    return 0;
}
