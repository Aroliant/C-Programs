#include <iostream>

using namespace std;

void start (void) __attribute__ ((constructor));
void start (void)
{
    cout << "Hello";
}

int main ()
{
}
