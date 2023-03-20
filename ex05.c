#include<stdio.h>

int main()
{
     int x;
    printf ("inserisci un numero");
scanf("%d", &x);

if (x>50)
{
   x/=2;
    printf ("il valore è %d\n", x);
}
else
{
 x*=3;
printf ("il valore è %d\n", x);   
}
}

