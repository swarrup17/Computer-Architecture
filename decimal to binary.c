#include<stdio.h>
#include<conio.h>
#include<math.h>
long decimalTobinary(long n)
{
int remainder;
long binary=0,i=1;
while(n!=0)
{
    remainder=n%2;
    n=n/2;
    binary=binary+(remainder*i);
    i=i*10;   
}
return binary;
}
int main()
{
long integernum;
printf("Enter a number:");
scanf("%D",&integernum);
printf("Equivalent binary number is:%d",decimalTobinary(integernum));
getch();

}
