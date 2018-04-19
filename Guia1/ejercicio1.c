#include <stdio.h>
int main ()
{
	float c1, c2, c3, promedio;
	int matricula;
	
	printf("Ingrese Matricula:\n ");
	scanf("%d", &matricula);
	printf ("Ingrese c1: ");
	scanf ("%f", &c1);
    printf ("Ingrese c2: ");
    scanf ("%f", &c2);
    printf ("Ingrese c3: ");
    scanf ("%f", &c3);
    
    promedio= (c1+c2+c3)/3;
    printf ("el promedio sera: %.1f", promedio);
    return 0;
   
}
