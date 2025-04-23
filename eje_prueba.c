#include <stdio.h>

int main(){

    int n, i, k = 1;

    printf("ingrese numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        k *= i;
    }

    printf("%d", k);

    return 0;
}
