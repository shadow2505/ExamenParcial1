#include <stdio.h>

int main() {
    int numeroInicial;
    char deseaContinuar;

    do {

        printf("Ingresa el numero inicial: ");
        scanf("%d", &numeroInicial);

        printf("Los 10 numeros a partir de %d son:\n", numeroInicial);
        for (int i = numeroInicial; i < numeroInicial + 10; i++) 
		{
            printf("%d\n", i);
        }

        // Pregunta al usuario si desea continuar
        printf("¿Deseas continuar? (s/n): ");
        scanf(" %c", &deseaContinuar); 
    } while (deseaContinuar == 's' || deseaContinuar == 'S');

    return 0;
}



