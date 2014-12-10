/* 
* @Author: JacobSamro
* @Date:   2014-12-03 02:15:50
* @Last Modified by:   JacobSamro
* @Last Modified time: 2014-12-10 14:27:12
*/

#include <iostream>
#include <conio.h>
using namespace std;

void start (void) __attribute__ ((constructor));
void start (void)
{
    cout << "Hello";
}

int main ()
{
	getch();
}
