#include <stdio.h>

int main (){
    int i, p;

    for(i=1; i <= 4; i++){
        for(p=1; p <= 8; p++){
            printf("@");
        }
        p=0;
        printf("\n");
    }
    return 0;
}