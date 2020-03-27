#include <iostream>

using namespace std;
int age;
bool check(int);
/** \brief : This is a function to show multi return function
 *   Also interesting because there is a bool function inside it and a if statement
 * \param
 * \param
 * \return : two different return in the declared function and return 0 in the main function
 *
 */

int main()
{
    cout << "Please Enter your age :" << endl;
    cin >> age;
    if(check(age)){
    cout << "You are adult";
    }
    else{
    cout << "You are a child";
    }
    return 0;
}

bool check(int age){
if(age>=18){
    return true;
}
    else{
    return false;
    }
}
