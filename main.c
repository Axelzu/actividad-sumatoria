#include <stdio.h>

int main() {
    int n;
    int suma;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("El número ingresado no es válido. Debe ser un número entero positivo.\n");
    } else {
        suma = (n * (n + 1)) / 2;
        printf("La suma de Gauss para %d es: %d\n", n, suma);
    }

    return 0; 
    
}
