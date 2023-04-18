#include <stdio.h>
#include <math.h>

int main (){
    int x,y,nx=0, ny=0;
    printf("ingrese numero x: ");
    scanf("%d", &x);
    printf("ingrese numero y: ");
    scanf("%d", &y);

    while (x > 1){
        x = x/10;
        nx++;
    }    
    while (y > 1){
        y = y/10;
        ny++;
    }
    if (nx > ny){
        printf("El numero x tiene mas digitos");
    }else{
        printf("El numero y tiene mas digitos");
    }
    return 0;
}