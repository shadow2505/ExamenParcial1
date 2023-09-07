#include <stdio.h>

int main() 
{
    while (1) 
	{
        int num;
        printf("Ingresa una lista de enteros separados por espacios (o ingresa 0 para salir): ");

        while (scanf("%d", &num) != 0) 
		{
            if (num % 2 != 0) 
			{
                printf("%d es impar.\n", num);
            }
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        if (num == 0) 
		{
            break;
        }
    }

    return 0;
}

