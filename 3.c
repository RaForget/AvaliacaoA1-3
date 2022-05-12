#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liminf, limsup, n, i, x, pri = 0, cp = 1;
    char c = 'S';

    while (c == 'S' || c == 's')
    {
        printf("Informe o valor do limite inferior do intervalo: ");
        scanf("%d", &liminf);
        printf("Informe o valor do limite superior do intervalo: ");
        scanf("%d", &limsup);
        printf("Informe quantos numeros deseja imprimir por linha: ");
        scanf("%d", &n);

        if (n > 0 && liminf > 1 && limsup >= liminf)
        {
            for (i = liminf; i <= limsup; i++)
            {
                for (x = 1; x < i; x++)
                {
                    if (i == 0 || i == 1)
                    {
                        pri = 0;
                    }
                    else
                    {
                        pri = 1;
                        for (x = 2; x < i; x++)
                        {
                            if (i % x == 0)
                            {
                                pri = 0;
                            }
                        }
                    }
                    if (pri == 1)
                    {
                        printf("%d ", i);
                        cp++;

                        if (cp = n)
                        {
                            printf("\n");
                            cp = 1;
                        }
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

    return 0;
}