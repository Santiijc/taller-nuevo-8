#include <stdio.h>

int main(){

    int n, i, k, ans = 0, f;

    printf("ingrese un valor: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
        f = 1;
        for(k = 1; k <= i; k++){
            f *= k;
        }

        printf("%d! = %d", i, f);
        printf("\n");
        ans += f;

    }


    printf("resultado %d", ans);

    return 0;
}
