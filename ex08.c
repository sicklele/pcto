#include<stdio.h>

int main ()
{
    int x;
    int y;
    int z;
    printf ("scrivi tre numeri");
    scanf ("%d %d %d", &x, &y, &z);
    int somma1 = x+y;
    int somma2 = x+z;
    int somma3 = y+z;
    if (somma1>x && somma2>y && somma3>z)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
}