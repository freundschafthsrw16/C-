#include <iostream>

using namespace std;

class Human{
public :
    string name="masoud";
    void Display(string);// declaring the function inside the class but initializing it out side the class using Scope Res
};
void Human :: Display(string name){
    cout << "My name is " << name;
}
int main()
{
    Human a;
    string name;
    cout << "Please Enter Your name :" << endl;
    cin >> name;
    a.Display(name);

    return 0;
}
