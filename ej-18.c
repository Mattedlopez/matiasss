#include <stdio.h>
#include <math.h>

int main (){
    int top, bttn, dif, n=0, i=0; //declaracion de variables
    //ingreso de variables
    printf("ingresa numero base: ");
    scanf("%d", &bttn);
    printf("ingresa numero tope: ");
    scanf("%d", &top);
    //definicion de la varibale dif
    dif = top-bttn;

    if ( dif > 5){//condicion
        while (n < dif){//lazo while
            n += 5;//incremento del numero
            i++;//incremento del contador
        }
        printf("hay %d multiplos de 5", i); //resultado
    }else{
        printf("No hay multiplos de 5 entre los numeros dados");
    }
    
    return 0;
}
