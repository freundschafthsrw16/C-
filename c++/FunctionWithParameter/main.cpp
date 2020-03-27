#include <iostream>
/*
*@brief : A function with two parameters.
*The parameters are going to be entered with the user, using cin command.
*we have two functions, namely void annoncement() and int sum(). void returns 0 and sum returns sum of two numbers.
*/
using namespace std;

void annoncement(int a, int b){
cout << "A is :"<< a << "and B is :"<< b << endl;
}
int sum(int a, int b){
  int sum;
  sum = a+b;
return sum;
}
int main()
{
    int a,b,sumofnumbers;
    cout << "Please Enter two values:" << endl;
    cin >> a >> b;
    sumofnumbers=sum(a,b);
    annoncement(a,b);
    cout << "The sum of this two numbers is :" << sumofnumbers;
    return 0;
}
