#include <stdio.h>

int main() {
    int F;
    int C;
    int K;
    int a;
    int b;
    int T;

    printf("Ingrese un tipo de temperatura, 1 para Celsius, 2 para Fahrenheit o 3 para Kelvin: ");
    scanf("%d", &a);
    printf("Ingrese un valor para su temperatura: ");
    scanf("%d", &T);


    if (a == 1){
        printf("Ingrese una unidad para transformarlo, 1 para Fahrenheit o 2 para Kelvin: ");
        scanf("%d", &b);
        if (b == 1){
            F = (9.0/5*T) + 32;
            printf("%d", F);
        } else if (b == 2){
            K = T + 273.15;
            printf("%d", K);
        }

    }

    else if (a == 2){
        printf("Ingrese una unidad para transformarlo, 1 para Celsius o 2 para Kelvin: ");
        scanf("%d", &b);
        if (b == 1){
            C = 5.0/9*(T - 32);
            printf("%d", C);
        } else if (b == 2){
            K = (T - 32)*5.0/9 + 273.15;
            printf("%d", K);
        }

    }
    else if (a == 3){
        printf("Ingrese una unidad para transformarlo, 1 para Celsius o 2 para Fahrenheit: ");
        scanf("%d", &b);
        if (b == 1){
            C = T - 273.15;
            printf("%d", C);
        } else if (b == 2){
            F = ((T - 273.15)*9.0/5) + 32;
            printf("%d", F);
        }

    }

    return 0;
}


