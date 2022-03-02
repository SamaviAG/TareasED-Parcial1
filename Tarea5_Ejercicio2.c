//DADO EL PESO POR KILO Y EL PESO, DETERMINAR CUANTO PAGARA UNA PERSONA
#include <stdio.h>
int main (){
    float precioF, kilos, precio_kilo, descuento;

    printf("Ingrese kilos de manzana a comprar:\n ");
    scanf("%f", &kilos);
    printf("Ingrese precio por kilos de manzana \n: ");
    scanf("%f", &precio_kilo);


    if (kilos>=0 && kilos <= 2){
        precioF= kilos*precio_kilo;
        printf("El precio final es:%.2f ",descuento);

    }
    if (kilos>=2.01 && kilos <= 5){
        precioF= kilos*precio_kilo;
        descuento= precioF-(precioF*0.10);
        printf("El precio final es:%.2f ",descuento );

    }
     if (kilos>=5.01 && kilos <= 10){
        precioF= kilos-(kilos*0.15);
        descuento= precioF-(precioF*0.15);
        printf("El precio final es: %.2f ",descuento);

    }
     if (kilos>=10.01){
        precioF= kilos-(kilos*0.20);
        descuento= precioF-(precioF*0.20);
        printf("El precio final es:%.2f ",descuento);

    }





return 0;
}
