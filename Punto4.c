#include <stdio.h>

int main(){
    int base, altura;

    printf("Digite la altura: ");
    scanf("%d", &altura);

    printf("Digite la base: ");
    scanf("%d", &base);

        for(int i=1;i<=altura;i++){
            for(int k=1;k<=base;k++){
                printf("@");
            }
            printf("\n");
        }

    return 0;
}