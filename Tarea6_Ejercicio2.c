#include <stdio.h>
int main(void)
{ int num;

    printf("Ingrese un num del 0 al 9\n");
    scanf("%i",&num);

    switch (num){
    case 1: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 2: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 3: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 4: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 5: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 6: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 7: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 8: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 9: printf("\nNumero dif de 0, ingrese un num mas: ");break;
    case 0: printf("\nNumero igual a 0 ");break;
    default: printf("Este num no es valido ");
    }
    return 0;
    }


