#include <stdio.h>

int main()
{
    int i,sum,x,y,n;
    x=-1;
    y=1;
	for (i=0;i<10;i++)
	{
		n=x+y;
        x=y;
        y=n;
		printf("%d\t", n);
	}
	
	return 0;
}