#include <stdio.h>
int main ()
{
	float base; 
	float altura;
	float perimetro; 
	float superficie; 
	
	printf ("Ingrese base: ");
	scanf ("%f", &base);
	printf ("\n");
	printf ("Insegre altura: ");
	scanf ("%f", &altura);
	
	printf ("\n");
	superficie= (base*altura);
    printf ("La superficie del rectangulo es: %.2f\n", superficie);
    
    printf ("\n");
	perimetro= 2*(base+altura);
	printf ("El perimetro del rectangulo es: %.2f\n", perimetro);
	
	return 0;
}
