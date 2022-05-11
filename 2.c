#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bem, dor;
    float temp;

    printf("O paciente se sente bem? (S ou N): ");
    scanf(" %c", &bem);

    if (bem == 'S')
    {
        printf("O paciente esta saudavel!");
    }
    else if (bem == 'N')
    {
        printf("O paciente tem dor? (S ou N): ");
        scanf(" %c", &dor);

        if (dor == 'S')
        {
            printf("O paciente esta doente!");
        }

        if (dor == 'N')
        {
            printf("Digite a temperatura do paciente: ");
            scanf("%f", &temp);

            if (temp <= 37)
            {
                printf("O paciente esta saudavel!");
            }
            else if (temp > 37)
            {
                printf("O paciente esta doente!");
            }
        }
    }
    else
    {
        printf("Tente novamente!");
    }
}