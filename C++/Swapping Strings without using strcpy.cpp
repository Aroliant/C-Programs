#include <iostream>

using namespace std;


int main(){
	char *str1,*str2,*temp;
	str1="Hello";
	str2="World";

	cout<<"Before Swapping : "<<str1<<" "<<str2;

	temp=str1;
	str1=str2;
	str2=temp;

	cout<<"\nAfter Swapping : "<<str1<<" "<<str2;

	return 0;
}


