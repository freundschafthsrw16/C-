#include <iostream>

using namespace std;
class SalesBook{
public:
void Display(){
cout<< "please buy a book from us"<< endl;
}
};
int SumOfTwo(int a, int b){
int sum=a+b;
return sum;
}

int main()
{
    int a,b;
    cout << "Enter first number:";
    cin>> a;
    cout << "Enter second number:";
    cin>>b;
    cout <<"The sum is:"<< SumOfTwo(a,b)<<endl;
    SalesBook mein;
    for(int j=0;j<SumOfTwo(a,b);j++){
    cout << j+1<<".";
    mein.Display();
    }
    return 0;
}
