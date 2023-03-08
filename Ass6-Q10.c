/*Write a program to take a three digit number from the user and rotate its digits by one
position towards the right.*/
#include<stdio.h>

int main()
{
    int num,x,y,z;
    printf("enter a three digit number\n");
    scanf("%d", &num);
    printf("the number is %d\n",num);
    
    x = num/10; //gives first two digits
    y = num%10; //gives last digit as remainder
    z = y*100+x;

    printf("output is %d", z);
    return 0;
    
}
