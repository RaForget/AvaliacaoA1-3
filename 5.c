#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nm, x;

    nm = rand() % 11;

    while (nm != x)
    {
        printf("\nDigite um numero entre 0 e 10: ");
        scanf("%d", &x);

        if (x == nm)
        {
            printf("Certo! %d eh o numero magico", nm);
        }
        else if (x > nm)
        {
            printf("Errado, muito alto");
        }
        else if (x < nm)
        {
            printf("Errado, muito baixo");
        }
        
    }
}