#include<stdio.h>

int main()
{
    int x;
printf ("inserisci un anno");
scanf ("%d", &x);
if ((x%4==0 && x%100!=0) || x%400==0)
{
printf ("bisestile)");
}
else
{
    printf ("non bisestile");
}
}