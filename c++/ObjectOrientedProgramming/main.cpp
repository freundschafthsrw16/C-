#include <iostream>

using namespace std;

class HumanBeing { // Class is exactly a data type, a user defined data type
public:
    void Display (){ //class method
    cout << "I am also a human being" << endl;
    };
    int  sex; // class attribute
    int weight; // class attribute
    int age; // class attribute
};
int main()
{
    cout << "Hello world!" << endl;
    HumanBeing a,b,c,d; //objects of class HumanBeing or in other words data of type HumanBeing
    a.age=10;
    cout << "Masoud age is " << a.age << endl;
    a.Display();
    b.Display();
    c.Display();
    d.Display();
    return 0;
}
