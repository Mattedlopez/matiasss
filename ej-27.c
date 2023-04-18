#include <stdio.h>
#include <math.h>

int main (){
    int x,y,nx=0, ny=0;//declaracion de variables
    printf("ingrese numero x: ");//ingreso de variables
    scanf("%d", &x);
    printf("ingrese numero y: ");
    scanf("%d", &y);

    while (x > 1){//lazo while y condicion
        x = x/10;//divicion por 10
        nx++;//incremento de contador
    }    
    while (y > 1){//mismo paso para la otra variable
        y = y/10;
        ny++;
    }
    if (nx > ny){//comparacion de contadores
        printf("El numero x tiene mas digitos");
    }else{
        printf("El numero y tiene mas digitos");
    }
    return 0;
}
