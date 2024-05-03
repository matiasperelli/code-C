#include <stdio.h>

int main() {
    long long n;

    printf("Ingrese un numero entero largo: \n");
    scanf("%lld", &n);

    if (n % 2 == 0){
        printf("El numero %lld es par\n", n);
    } else {
        printf("El numero %lld es impar\n", n);
    }

    return 0;
}
