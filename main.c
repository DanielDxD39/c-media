#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        printf("\nAprovado\n");
    }
    else
    {
        printf("\nReprovado\n");
    }
    return 0;
}