#include <iostream>
int x,y;
using namespace std;
void reverse( int t,int  r){
int *c,*d,z;
z=t;
c=&t, d=&r;
*c=r;
*d=z;
 cout << "x is now :" << t << endl;
 cout << "y is now :" << r << endl;
 x= t;
 y= r;
 }
 int sum(){
     x=x+1;
 return x;
 }

int main()
{

    cout << "Pleas Enter two values" << endl;
    cin >> x >> y;
    reverse(x,y);

    cout << "x is now :" << x << endl;
    cout << "y is now :" << y << endl;
    sum();
    cout << "\nx is now :" << x;


    return 0;
}
