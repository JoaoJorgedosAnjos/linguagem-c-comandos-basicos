/*
    Comando break:
    Interrompe a repetição de qualquer comando de laço(for, while ou do-while)
    ex:
    repetição(condicao)
    {
        if(condicao2)
            break;
    }
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);
    while (a <= b)
    {
        a = a + 1;
        if (a == 5)
            break;
    }
    printf("%d\n", a);
    return 0;
}