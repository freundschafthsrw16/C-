#include <iostream>

using namespace std;

class Human{ //Creating a class from type Human
public :
    string name;
    void Display(string name){ // A method of this class
    cout << "Hi, I am " << name << endl;
    }
};

int main()
{
    string name;
    Human a; // object from class a
    cout << "Hello, Please Enter Your name" << endl;
    cin >> name;
    a.Display(name); // running the method for object a

    return 0;
}
