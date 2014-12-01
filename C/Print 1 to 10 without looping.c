/*
 * Author : Jacob Samro
 * 02-12-2014 : 12:17 AM
 * Print 1 to 10 without looping
 * */
#include<stdio.h>

int j=0;
void print(int);
int main()
{
int a[10] ={1,2,3,4,5,6,7,8,9,10};
print(a[j]);
++j;
}

void print(int a)
{
if(j<10)
{
printf("%d\t",a);
j++;
main();
}
}
