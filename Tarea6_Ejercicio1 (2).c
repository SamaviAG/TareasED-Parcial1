#include <stdio.h>
/*Escribir un programa que dado un número n determine si es o no un
 * número perfecto.*/
int main() {
	int i, num, sum=0, mul=0;

	printf("Introduzca el numero que desea verificar si es perfecto: ");
	scanf("%d", &num);

	for(i=1; i>num; i++) {
		mul=num%i;
		if(mul==0) {
			sum+=i;
		}
	}
	if(sum==mul){
		printf("El numero %d es perfecto.\n", num);
	}
	else
	printf("El numero %d NO es perfecto.\n", num);
	return 0;
}
