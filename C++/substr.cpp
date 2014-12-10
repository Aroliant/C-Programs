/*
 * Author : Jacob Samro
 * 03-12-2014 : 12:53 AM
 * substr - Substring
 * substr ('Hello',1,4) ==>> ello
 * */

#include <iostream>
#include <string.h>
using namespace std;
void substr(char *str, int start, int size)
{
	char a[size];
	if(strlen(str)>=start+size){
	for(int i=start;i<(start+size);i++)
		cout<<str[i];
	}
	else{
		cout<<"Size Overflow";
	}
	cout<<"\n";
}

int main ()
{
    char data[] = "JacobSamro";
    substr(data,5,5);
    substr(data,5,6);
    substr("Hello",1,4);
    return 0;
}



