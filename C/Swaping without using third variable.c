/*
 * Author : Jacob Samro
 * 02-12-2014 : 12:06 AM
 * Swaping without using third variable
 * */

#include <stdio.h>

int main()
{
	int a,b;
	a=10;
	b=20;
	printf("The first value is %d and the second is %d\n",a,b );

	a=a+b;
	b=a-b;
	a=a-b;
	printf("The first value is %d and the second is %d",a,b );
return 0;
}
