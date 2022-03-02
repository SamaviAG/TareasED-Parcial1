//LEA LOS VALORES DE UN TRIANGULO, DETERMINE Y MUESTRE UN MENSAJE CORRESPONDIENTE A SU TIPO
#include<stdio.h>
#include<math.h>
int main(){
    int lado1, lado2, lado3;
     printf("Ingrese lado 1 ");scanf("%i",&lado1);
     printf("Ingrese lado 2 ");scanf("%i",&lado2);
     printf("Ingrese lado 3 ");scanf("%i",&lado3);


        if(lado1==lado2 && lado1!=lado3){
        printf("El triangulo es Isoceles ");
        }
        if(lado2==lado3&&lado2!=lado1){
        printf("El triangulo es Isoceles ");
        }
        if(lado1==lado3&& lado1!=lado2){
        printf("El triangulo es Isoceles ");
        }
        if (lado1!=lado2&& lado1!=lado3&& lado3!=lado2){
        printf("El triangulo es escaleno ");
        }
         if (lado1==lado2 && lado1==lado3){
        printf("El triangulo es equilatero ");
        }


return 0;
}
