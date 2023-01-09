#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    printf("Vvedite a: ");
    scanf("%i",&a);
    printf("Vvedite b: ");
    scanf("%i", &b);
    if (a > b)
    {
        printf("a bolshe!");
    }
    else
    {
        if (a == b)
        {
            printf("a ravno b!");
        }
        else
        {
            printf("b bolshe!");
        }
    }
}
