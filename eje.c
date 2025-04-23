#include <stdio.h>

int main(){

    int i, k;

    for(i = 0; i <= 3; i++){
        for(k = 0; k <= 7; k++){
            printf("@");
        }
        k = 0;
        printf("\n");
    }

    return 0;
}