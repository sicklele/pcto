#include<stdio.h>

int main ()
{
    int x;
    int sbarco = 1969;
    printf ("inserisci il tuo anno di nascita");
    scanf ("%d", &x);

    if (x==sbarco)
    {
       printf ("sei nato nello stesso anno dello sbarco sulla luna"); 
    }
    else if (x>sbarco)
    {
        int y = x-sbarco;
    printf ("sei nato dopo %d anni dopo lo sbarco sulla luna", y);
    }
    else
    {
        int z = sbarco-x;
        printf ("sei nato %d anni prima dello sbarco sulla luna", z);
    }
}