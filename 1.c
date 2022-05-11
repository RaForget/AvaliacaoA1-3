#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char categoria;
    float media, quantidade, soma = 0, total = 0;

    do
    {
        printf("Informe a categoria: ");
        scanf(" %c", &categoria);

        // Vai ler a quantidade somente quando categoria for igual a 'A','B' ou 'C'
        if (categoria == 'A' || categoria == 'B' || categoria == 'C')
        {
            printf("Informe a quantidade: ");
            scanf("%f", &quantidade);

            // Garante que a quantidade vai ser maior que 0
            if (quantidade <= 0)
            {
                printf("A quantidade deve ser um numero maior que 0.");
                break;
            }

            soma = soma + quantidade;
            total++;
            // Verificar para que não seja uma divisão por 0
            if (total <= 0)
            {
                break;
            }
            else
            {
                media = soma / total;
            }
        }
        // Enquanto a váriavel "categoria" for = a 'A', 'B' ou 'C', o programa continuará funcionando
    } while (categoria == 'A' || categoria == 'B' || categoria == 'C');

    printf("A media dos produtos eh : %.2f", media);

    return 0;
}