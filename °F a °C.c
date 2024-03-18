#include <stdio.h>

int main() {
    int F;
    int C;
    
    printf("Ingrese temperatura en Fahrenheit: ");
    scanf("%d", &F);
    
    C = 5.0/9*(F - 32);
    
    printf("%d", C);
    return 0;
}
