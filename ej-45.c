#include <stdio.h>
#include <math.h>

int main (){
    int max, i, j, fact;//declaracion de variables

    printf("Ingresa el limite: ");
    scanf("%d", &max);//leer variable

    for ( i = max; i >= 1; i--){//lazo for
        fact=1;//reinicio de variabel
        for ( j = i; j >= 1; j--){
            fact = fact * j;//incremento de variable
        }
        printf("%d! = %d\n", i, fact);//mostrar la variable
    }
   
    return 0;
}
