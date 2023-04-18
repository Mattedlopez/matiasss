#include <stdio.h>
#include <math.h>

int main (){
    int max, i, j, fact;//declaracion de variables

    printf("Ingresa el limite: ");
    scanf("%d", &max);//leer variable

    for ( i = max; i >= 1; i--){
        fact=1;
        for ( j = i; j >= 1; j--){
            fact = fact * j;
        }
        printf("%d! = %d\n", i, fact);
    }
   
    return 0;
}