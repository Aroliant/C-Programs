/*
 * Author : Jacob Samro
 * 02-12-2014 : 12:26 AM
 * Simple Dynamic Memory allocation
 * */

#include<iostream>

class dynamic{

	int *a,*b;

public:
	void create()
	{
		a=new int;
		b=new int;
		*a=10;
		*b=20;
	}

	void display()
	{
		std::cout<<"\nThe Sum of "<<*a<<" and  "<<*b<<" is "<<*a+*b;
	}
};

int main()
{
	dynamic obj;
	obj.create();
	obj.display();
	return 0;
}
