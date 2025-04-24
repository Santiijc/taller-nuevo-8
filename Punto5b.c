<<<<<<< HEAD
ECHO est  activado.
=======
#include <stdio.h>

int main () {
    int n, i, j;
    double fact, suma = 0;

    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
        fact = 1;
        for(j = 1; j <= i; j++){

            fact *= j;
        }
        suma += fact * fact;

    }

    printf("La suma es: %.0lf", suma);

    

    return 0;
}
>>>>>>> d348d6a3be418511daba2f5b45ad7987e70dbc6d
