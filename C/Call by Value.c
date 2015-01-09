#include <stdio.h>
int myFunc(int,int);


int main()
{
	myFunc(75,41);
	return 0;
}

int myFunc(int a,int b)
{
	printf("The sum is %d\n", a+b);
	return 0;
}