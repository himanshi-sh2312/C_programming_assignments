//Write a program to find middle digit of a given three digit number

//Write a program to find first digit of a given three digit number

#include<stdio.h>

int main()
{

int x,y;
printf("enter a three digit number");
scanf("%d",&x);
y=x/10;

printf("middle digit is %d", y%10);
return 0;



}
