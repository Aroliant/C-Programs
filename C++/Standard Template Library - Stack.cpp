/*
 * Author : Jacob Samro
 * 02-12-2014 : 12:30 AM
 * Standard Template Library
 * */

#include<stack>
#include<iostream>

using namespace std;

int main()
{
int item;
stack<int> s;
int choice;
 cout<<"1.Push\n2.Pop\n3.Top Element\n4.Exit";
while(1)
{
 cout<<"\nEnter your choice";
 cin>>choice;
	switch(choice){
	case 1:  cout<<"Enter the element to be pushed";
			 cin>>item;
			s.push(item);
			 cout<<"Item pushed";
			break;
	case 2:	if(!s.empty()){
			s.pop();
			 cout<<"Element Popped";
			}
			else{
				 cout<<"Stack is Empty";
			}
			break;
	case 3:	if(!s.empty()){
			 cout<<"The top element of stack is"<<s.top();
			}
			else{
			 cout<<"The stack is empty";
			}
			break;
	case 4: goto exit;
			break;
	default:  cout<<"Invalid Choice";
	}	//switch
}	//while loop
exit:
return 0;
}	//main
