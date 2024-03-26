#include <stdio.h>

int main() {
    int F;
    int C;
    int K;
    int a;
    
    printf("Ingrese temperatura en Celsius: ");
    scanf("%d", &C);
    
    printf("Ingrese 1 para Fahrenheit o 2 para Kelvin: ");
    scanf("%d", &a);
    
    if (a == 1){
        F = (9.0/5*C) + 32;
        printf("%d", F);
    }
    
    else if (a == 2){
        K = C + 273.15;
        printf("%d", K);
    }
    return 0;
}
