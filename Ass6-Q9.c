/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>

int main()
{

int Rs;
printf("enter rupees\n");

scanf("%d", &Rs);
printf("USD is %f", Rs/76.23);//use%0.2f for printing only 2 decimal places
return 0;

}