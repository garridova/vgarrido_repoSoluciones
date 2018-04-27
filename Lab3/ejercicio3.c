/* Algoritmo Narrado
 *Declarar variables de tipo int. 
 *Crear una funcion con un posterior ciclo for.
 *Se retorna la funcion en pagototal.
 *Declaran nuevas variables dentro de un int main.  
 *lamar a la funcion. 
 *Se muestra al usuario el pago total.
 *retorna en 0. 
 */

 #include <stdio.h>
 #include <stdlib.h>

int cuentatotal ()
{ 
	int a, pagototal=0, pagoanterior;
	
	pagoanterior=10; 
    for (a=0; a <= 20; a++){
	 pagototal= pagototal+ pagoanterior;
	 printf ("Para el mes %d su pago es de: %d\n", a+1,pagoanterior);
	 pagoanterior= pagoanterior*2; 
	 
	} 
	return pagototal;
} 
 
 int main ()
 {
	 int pagototal;
		
	 pagototal = cuentatotal ();
	 printf ("Pago total: %d", pagototal);
	 
	 return 0;
} 	 
	 
