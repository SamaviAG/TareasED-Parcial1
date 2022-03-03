#include <stdio.h>

int main(){
	int numeros[] = {15,7,9,34,8,3,22,4,27,6,},mayor, menor;

	mayor = menor = numeros[0];

	for (int i = 1; i < sizeof(numeros) / sizeof(numeros[0]); ++i)
	{
		if (numeros[i] > mayor) mayor = numeros[i];
		if (numeros[i] < menor) menor = numeros[i];
	}
	printf("El mayor es %d y el menor es %d\n", mayor, menor);

return 0;
}

