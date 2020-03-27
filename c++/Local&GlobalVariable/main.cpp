#include <iostream>
/*
*@brief : In this function x is a global variable, so can be called in main also in any defined function.
*on the other side, a is a local function which can only be called in its own declared function.
*
*/
using namespace std;
int x=10;
void Display1();
void Display2();

int main()
{
    cout << x << endl;
    Display1();
    Display2();
    return 0;
}

void Display1(){
 cout << x << endl;// x is a global variable
}
void Display2(){
int a=20; // a is a local variable
cout << a;
}
