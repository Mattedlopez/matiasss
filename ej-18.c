#include <stdio.h>
#include <math.h>

int main (){
    int top, bttn, dif, n=0, i=0; 
    printf("ingresa numero base: ");
    scanf("%d", &bttn);
    printf("ingresa numero tope: ");
    scanf("%d", &top);

    dif = top-bttn;

    if ( dif > 5){
        while (n < dif){
            n += 5;
            i++;
        }
        printf("hay %d multiplos de 5", i); 
    }else{
        printf("No hay multiplos de 5 entre los numeros dados");
    }
    
    return 0;
}