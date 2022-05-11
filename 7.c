#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float quant, nquant = 0, notas, resto, valu, vtotal, vmedio, cents;
    int reais;
    char c = 's';

    while (c == 's')
    {

        while (quant > 0)
        {
            printf("\nInforme a quantidade de um produto: ");
            scanf("%f", &quant);
            nquant = nquant + quant;
            if (quant > 0)
            {
                printf("Informe o valor unitario do produto: ");
                scanf("%f", &valu);
                vtotal = vtotal + (valu * quant);
            }
        }

        vmedio = vtotal / nquant;
        reais = floor(vtotal);
        cents = vtotal - reais;

        printf("VALOR TOTAL DA COMPRA: R$ %.2f\n", vtotal);
        printf("VALOR MEDIO DA COMPRA: R$ %.2f\n\n", vmedio);

        printf("O valor total da compra eh %d reais e %.2f centavos.\n", reais, cents);

        printf("\n%d reais equivale a:\n\n", reais);

        if (reais >= 100)
        {
            notas = reais / 100;
            resto = reais % 100;
            reais = resto;

            printf("%.0f nota(s) de 100\n", notas);
        }
        if (reais >= 50)
        {
            notas = reais / 50;
            resto = reais % 50;
            reais = resto;

            printf("%.0f nota(s) de 50\n", notas);
        }
        if (reais >= 20)
        {
            notas = reais / 20;
            resto = reais % 20;
            reais = resto;

            printf("%.0f nota(s) de 20\n", notas);
        }
        if (reais >= 10)
        {
            notas = reais / 10;
            resto = reais % 10;
            reais = resto;

            printf("%.0f nota(s) de 10\n", notas);
        }
        if (reais >= 5)
        {
            notas = reais / 5;
            resto = reais % 5;
            reais = resto;

            printf("%.0f nota(s) de 5\n", notas);
        }
        if (reais >= 2)
        {
            notas = reais / 2;
            resto = reais % 2;
            reais = resto;

            printf("%.0f nota(s) de 2\n", notas);
        }
        if (reais >= 1)
        {
            printf("%.0f moeda(s) de 1\n", reais);
        }
        printf("Deseja repetir o programa (S ou N)?");
        scanf(" %c", &c);

        quant = 1;
        vtotal = 0;
        nquant = 0;
    }
}