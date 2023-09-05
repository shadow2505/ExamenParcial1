#include <stdio.h>

int main() {
    int N;
    char continuar;

    do {
        printf("Ingrese la cantidad de numeros a sumar: ");
        scanf("%d", &N);

        int suma = 0;
        for (int i = 0; i < N; i++) {
            int numero;
            printf("Ingrese el numero %d: ", i + 1);
            scanf("%d", &numero);
            suma += numero;
        }

        printf("La suma de los %d numeros ingresados es: %d\n", N, suma);

        printf("¿Desea realizar otra operación? (s/n): ");
        scanf(" %c", &continuar); 

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

