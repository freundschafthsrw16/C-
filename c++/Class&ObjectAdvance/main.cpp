#include <iostream>

using namespace std;

class Human{
    public:

int age;
int weight;
string name;
void Display(){
cout << "my name is : " << name << ",and my age is : " << age << " and my weight is :" << weight <<endl;
}
};

int main()
{

    Human a[10];
    for(int i=0;i<4;i++){
    cout << "Please Enter your name" << endl;
    cin >> a[i].name;
    }
    for(int j=0;j<4;j++){
    a[j].age=j;
    a[j].weight=j+5;
    }
    for(int k=0;k<4;k++){
    a[k].Display();
    }
    return 0;
}
