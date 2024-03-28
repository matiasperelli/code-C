#include <stdio.h>

int main(){

    int x;
    int y;
    int suma, resta, multiplicacion, division, modulo;

    printf("Ingrese el valor para x: ");
    scanf("%d", &x);

    printf("Ingrese el valor para y: ");
    scanf("%d", &y);

    suma = x + y;
    resta = x - y;
    multiplicacion = x * y;
    division = x / y;
    modulo = x % y;

    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicacion es: %d\n", multiplicacion);
    printf("La division es: %d\n", division);
    printf("El modulo es: %d\n", modulo);


    return 0;
}
