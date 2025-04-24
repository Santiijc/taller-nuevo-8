<<<<<<< HEAD
#include <stdio.h>

int main(){
    int precio, modelo, numDis = 0,n=1, total =0, cantTotalequip =0;
    char nombre;

    printf("\nDigite el número de dispositivos: ");
    scanf("%d", &numDis);
    fflush(stdin);

    do{
       
        printf("\n\nDigite el Nombre del producto: \n\nej:\nTelevisores\nTablet\nParlantes inteligentes\n\n");
        printf("\nDigite el nombre: ");
        scanf("%c", &nombre);
        fflush(stdin);
 
        printf("\nDigite el precio del producto: ");
        scanf("%d", &precio);
        fflush(stdin);

        printf("\nDigite el modelo del producto: ");
        scanf("%d", &modelo);
        fflush(stdin);


        total = total + precio;


        if(modelo < 2021 && precio < 740000){

            cantTotalequip++;
        }


        n++;
    }while(n<=numDis);

    printf("El valor total de existencias es: %d", total);
    printf("Cantidad de equipos de modelo inferior a 2021 cuyo precio es menor a $740.000: %d", cantTotalequip);

    return 0;
=======
#include <stdio.h>

int main(){
    int precio, modelo, numDis = 0,n=1, total =0, cantTotalequip =0;
    char nombre;

    printf("\nDigite el número de dispositivos: ");
    scanf("%d", &numDis);
    fflush(stdin);

    do{
       
        printf("\n\nDigite el Nombre del producto: \n\nej:\nTelevisores\nTablet\nParlantes inteligentes\n\n");
        printf("\nDigite el nombre: ");
        scanf("%c", &nombre);
        fflush(stdin);
 
        printf("\nDigite el precio del producto: ");
        scanf("%d", &precio);
        fflush(stdin);

        printf("\nDigite el modelo del producto: ");
        scanf("%d", &modelo);
        fflush(stdin);


        total = total + precio;


        if(modelo < 2021 && precio < 740000){

            cantTotalequip++;
        }


        n++;
    }while(n<=numDis);

    printf("El valor total de existencias es: %d", total);
    printf("Cantidad de equipos de modelo inferior a 2021 cuyo precio es menor a $740.000: %d", cantTotalequip);

    return 0;
>>>>>>> d348d6a3be418511daba2f5b45ad7987e70dbc6d
}