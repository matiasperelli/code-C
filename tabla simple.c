#include <stdio.h>

int main(){

    int F;


    printf("Tabla de Fahrenheit a Celsius\n");

    for (F = 0; F <= 200; F = F + 10)
        printf("%d %.2f\n", F, (F-32)*5.0/9);

}
