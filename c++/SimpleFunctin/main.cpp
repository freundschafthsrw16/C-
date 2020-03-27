#include <iostream>
/**
*@brief In this code I am learning two different methods for declaring and initializing functions
*
*There are two functions here, Display() and sum().Display()is only prototyped before main while sum() is declared and initialized.
*@return : return 0
*/
using namespace std;
void Display();
int sum(int a,int b){
return a+b;
}

int main()
{
    int a,b;
    Display();
    cout << "Please Enter two numbers to be added: ";
    cin >> a >> b;
    cout << sum(a,b);
    return 0;
}
void Display(){
cout << "Here we are learning how to write a function"<< endl;
}
