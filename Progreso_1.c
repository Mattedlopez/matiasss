#include <stdio.h>

void primo(int a){
    int i, j;

    for ( i = 0; i < a ; i++){
        if (a%i==0){
            j++;
        }
    }
    if (j<=2){
        printf("Primo\n");
    }else{
        printf("No Primo\n");
    }
}

int main(){
    int a[20];
    int n, i, j, pp, p, pnp, np;

    printf("ingresa la cantidad de numeros que vas  a ingresar: ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++){
        printf("%d: Ingresa un numero: ", i+1);
        scanf("%d", &a[i]);
        primo(a[i]);
        if ( primo(a[i]) = "primo"){
            p=+1;
        }else{
            np=+1;
        }
    }

    pp=(p/n)*100;
    pnp=(np/n)*100;

    printf("El %d son numeros primos.", pp);
    printf("El %d son numeros no primos.", pnp);

    return 0;
}