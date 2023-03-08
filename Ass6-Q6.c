//Write a program to swap values of two int variables without using third variable



#include<stdio.h>

int main()
{

int x,y;
printf("enter two numbers\n");
scanf("%d %d",&x, &y);
printf("Numbers are x=%d   y=%d\n", x,y);
x=x+y;
y=x-y;
x=x-y;

printf("new values are x=%d    y=%d", x,y);

return 0;



}
