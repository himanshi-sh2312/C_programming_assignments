/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>

int main()
{

int x,y;
printf("enter a number and a digit\n");
scanf("%d %d",&x, &y);
printf("Number is x=%d\n digit is %d\n", x,y);

x = (x*10) + y;

printf("new values is %d",x);

return 0;



}