#include<stdio.h>

float main()
{
    float x;
    printf ("inserisci una temperatura gradi Celsisu");
    scanf ("%f", &x);
    if (x<-273.15)
    {
     printf ("impossibile");   
    }
    else
    {
        float b = x-273.15;
        printf ("la temeperatura in kelvin è %f\n", b);
        float c = x*1.8+32;
    printf ("la temperatura Fahreneit è %f\n", c);
    }

}