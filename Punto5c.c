#include <stdio.h>

int main (){
    int n, i, j, imp = 1, pot = 2;
    double suma = 0, result = 1, fact;

    for(i = 1; i < 5; i++){
        fact = 1;
        for(j = 1; j <= imp; j++){
            fact *= j;
        }
            for(n = 1; n <= pot; n++){
                result *= fact;
            
        }
        printf("\n(%d!)^%d = %.0lf", imp, pot, result);

        suma += result;

        imp += 2;
        pot++;
    }
    printf("\n\nLa suma total es: %.0lf", suma);
    return 0;
}