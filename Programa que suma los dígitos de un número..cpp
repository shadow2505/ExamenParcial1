#include <stdio.h>

int main() {
    int numero, suma = 0;
    char continuar;

    while (1) 
	{
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);

        
        while (numero != 0) 
		{
            suma += numero % 10; 
            numero /= 10; 
        }

        printf("La suma de los dígitos es: %d\n", suma);

        suma = 0; 

        printf("¿Desea ingresar otro numero? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S') 
		{
            break; 
        }
    }

    return 0;
}

