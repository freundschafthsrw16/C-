#include <iostream>

using namespace std;

int sum(int a, int b){
    int summ=a+b;
return summ;
}

void display(int resultofsum){
cout << "The sum of these two numbers is equal to :" << resultofsum << endl;
}

class Human{
public :
    int age;
    int weight;
    void Display(int age, int weight){
    cout << "Your age is : " << age << " and My weight is : " << weight << endl;
    };

};

int main()
{
    int a,b,d,e;
    cout << "Please Enter two numbers :" << endl;
    cin >> a >> b;
    display(sum(a,b));
    Human c;
    cout << "Human c, Please Enter your age and weight respectively: " << endl;
    cin >> d >> e;

    c.Display(d,e);
    return 0;
}
