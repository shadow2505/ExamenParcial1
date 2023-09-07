#include <stdio.h>

int main() 
{
    int numero;

    while (1) 
    {
        printf("Ingresa un numero para obtener la tabla o ingresa 0 para salir: ");
        scanf("%d", &numero);

        if (numero == 0) 
        {
            break;
        }

        printf("Tabla de multiplicar de %d:\n", numero);
        for (int i = 1; i <= 10; ++i) 
        {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}

