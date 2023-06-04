#include<stdio.h>
#include<conio.h>
#include<math.h>
int binaryTodecimal(long binarynum)
{
int decimalnum=0,temp=0,remainder;
while(binarynum!=0)
{
    remainder=binarynum%10;
    binarynum=binarynum/10;
    decimalnum=decimalnum+remainder*pow(2,temp);
    temp++;   
}
return decimalnum;
}
int main()
{
	long binarynum,decimalnum;
	printf("Enter a binary number:");
	scanf("%D",&binarynum);
	printf("Equivalent decimal number is:%d",binaryTodecimal(binarynum));
	return 0;
}
