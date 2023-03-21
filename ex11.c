#include<stdio.h>

int main()
{
int x;
int y;
while (x<100)
{
x= x+2;
y+=x;
}
printf("%d\n", y);
}