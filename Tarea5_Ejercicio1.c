//A) SI LA HORA ESTA ENTRE LAS 00:00 Y LAS 11:59 SALUDARA CON BUENOS DIAS
//B) SI LA HORA ESTA ENTRE LAS 12:00 Y LAS 17:50 SALUDARA CON BUENAS TARDES
//C) SI LA HORA ESTA ENTRE LAS 18:00 Y LAS 23:59 SALUDARA CON BUENAS NOCHES
//D) CUALQUIER OTRA OPCION DIRA QUE LA HORA NO ES VALIDA
#include<stdio.h>
int main (){

    int hora, min;
    printf("Ingrese horas: "); scanf("%i",&hora);
    printf("Ingrese minutos : "); scanf("%i",&min);

    if (hora >=0 && hora <= 12 && min< 59 ){
        printf("Buenos dias ");
    }

    if (hora >=12 && hora <=17 && min< 50 ){
        printf("Buenas tardes ");
    }


    if (hora>=18 && hora<=23  && min< 59 ){
        printf("Buenas noches ");
    }
    if (hora>24 && hora< 0 && min< 0 && min>59){
        printf("HORA NO VALIDA ");
    }


return 0;
}
