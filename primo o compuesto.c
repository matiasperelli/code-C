#include <stdio.h>

int main() {
    int num, i;
    int primo = 1; // supondremos que el numero siempre es primo

    printf("Ingrese un numero entero positivo mayor que uno: \n");
    scanf("%d", &num);

    // verifica que cada numero hasta num no sea divisor
        for (i = 2; i <= num / 2; i++){
            if (num % i == 0){ // si es divisible por uno de estos numeros, no es primo
                primo = 0;
            break;
        }
    }

    if (primo){
        printf("El numero %d es primo\n", num);
    } else {
        printf("El numero %d es compuesto \n", num);
    }

    return 0;

}
