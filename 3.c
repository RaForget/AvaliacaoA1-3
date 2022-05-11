#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liminf, limsup, n, i, x, primo = 0;
    char c = 'S';

    while (c == 'S')
    {
        printf("Informe o valor do limite inferior do intervalo: ");
        scanf("%d", &liminf);
        printf("Informe o valor do limite superior do intervalo: ");
        scanf("%d", &limsup);
        printf("Informe quantos numeros deseja imprimir por linha: ");
        scanf("%d", &n);

        if (n > 0 && liminf > 1 && limsup >= liminf)
        {
            for (i = liminf - 2; i <= limsup; i++)
            {
                if (i = n || i % n ==0)
                {
                    printf("\n");
                }
                for (x = 1; x < i; x++)
                {
                    if (i == 0 || i == 1)
                    {
                        primo = 0;
                    }
                    else
                    {
                        primo = 1;
                        for (x = 2; x < i; x++)
                        {
                            if (i % x == 0)
                            {
                                primo = 0;
                            }
                        }
                    }
                    if (primo == 1)
                    {
                        printf("%d ", i);
                    }
                }
            }
        }
        else
        {
            printf("Tente novamente!");
            break;
        }

        printf("\nDeseja repetir o programa (S ou N)? ");
        scanf(" %c", &c);
    }
}