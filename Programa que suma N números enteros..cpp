#include <stdio.h>

int main() {
    int N;
    char continuar;

    do {
        printf("Ingrese la cantidad de números a sumar: ");
        scanf("%d", &N);

        int suma = 0;
        for (int i = 0; i < N; i++) {
            int numero;
            printf("Ingrese el número %d: ", i + 1);
            scanf("%d", &numero);
            suma += numero;
        }

        printf("La suma de los %d números ingresados es: %d\n", N, suma);

        printf("¿Desea realizar otra operación? (s/n): ");
        scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

