/*
 * Author : Jacob Samro
 * 02-12-2014 : 12:15 AM
 * Integer to Array Conversion
 * */

#include<stdio.h>
#include<string.h>
#define __SIZE__ 6


int main()
{
	int number=123456;
	int array[__SIZE__];
	int i=0,rem,rev;
	int out[__SIZE__];
	int ini=0;
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
		array[i]=rem;
		i++;
	}

	for(i=__SIZE__-1;i>=0;i--)
	{
	out[ini]=array[i];
	++ini;
	}
	printf("\n");
	for(i=0;i<__SIZE__;i++)
	printf("%d\t",out[i]);
	return 0;
}
