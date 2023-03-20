#include <stdio.h>

int main()

{
    int x;
    int y;
    printf ("inserisci due numeri");
    scanf ("%d %d",  &x, &y);
    printf ("x: %d\n", x);
int a = x+y;
int b = x-y;
int c = x*y;
int d = x/y;
printf ("la somma di x+y è %d\n", a);
printf ("la sottrazione di x-y è %d\n", b);
printf ("la moltiplicazione di x*y è %d\n",c);
printf ("la divisone di x/y è %d\n", d);
}