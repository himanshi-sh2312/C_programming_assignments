//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main()
{

int x,y;
printf("enter a number\n");
scanf("%d",&x);
printf("Number is x=%d\n", x);

y = x-(x%10);

printf("new values is %d",y);

return 0;



}
