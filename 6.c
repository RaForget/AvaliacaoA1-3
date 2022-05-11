#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, c = 0;
    char v = 's';

    while (v == 's')
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &n);
        printf("\n");

        for (i = 0; i <= n; i++)
        {
            c++;
            for (i = 0; i < c; i++)
            {
                printf("%d  ", c);
            }
            printf("\n");
        }

        printf("\n");
        printf("Deseja digitar outro numero (S ou N): ");
        scanf(" %c", &v);
        printf("\n");
        c=0;
    }
