#include <stdio.h>

int main()
{
    
    float sum = 0;

    int linha;
    scanf("%d\n", &linha);
    
    char operacao;
    scanf("%c", &operacao);
    int i, j;
    for ( i  = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
            float entrada;
            scanf("%f", &entrada);
            if (i == linha)
                sum += entrada;
        }

    }

    switch (operacao)
    {
    case 'S':
        printf("%.2f\n", sum);
        break;
    
    default:
        printf("%.1f\n", sum / 12);
        break;
    }

    return 0;
}