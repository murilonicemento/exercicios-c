#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf ("Digite um número: ");
    scanf("%d",&num);
    while (num!=0)
    {
        printf ("O número lido foi = %d\n ",num);
        printf ("Digite um número: ");
        scanf("%d",&num);
    }
    return 0;
}
