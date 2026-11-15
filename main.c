#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	int diasVencimiento;
	
	printf("Ingrese el numero de tu entrada: ");
	scanf ("%d", &numero);
	
	printf ("Ingrese los dias para el vencimiento: ");
	scanf("%d", &diasVencimiento);
	
	if (diasVencimiento > 0){
		printf("La entrada %d es valida", numero);	
	}
	else{
		printf("La entrada %d esta vencida", numero);
	}
	return 0;
}
