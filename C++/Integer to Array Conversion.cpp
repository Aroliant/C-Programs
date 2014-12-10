/*
 * Author : Jacob Samro
 * 02-12-2014 : 12:17 AM
 * Integer to Array Conversion
 * */

#include <iostream>
#include <string.h>
#include <conio.h>

#define __SIZE__ 6

using namespace std;

int main()
{
	int number=123456;
	int array[__SIZE__];
	int i=0,rem,rev;

	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
		array[i]=rem;
		i++;
	}

	int out[__SIZE__];
	int ini=0;
	for(int i=__SIZE__-1;i>=0;i--)
	{
	out[ini]=array[i];
	++ini;
	}
	cout<<"\n";
	for(int i=0;i<__SIZE__;i++)
	cout<<out[i]<<"\t";

	getch();
	return 0;
}
