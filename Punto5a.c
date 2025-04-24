#include <stdio.h>

int main (){
    int n, i, j;
    double fact, suma;

    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &n);

    i=2; suma=0;
    while(i<=n){
        j=1; fact=1;
        while(j<=i){
            fact *= j;
            j++;
        }
        suma += fact;
        i++;
    }
    printf("La sumatoria es: %.0lf", suma);


    return 0;
}