#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Please Enter a number" << endl;
    cin >> i;
    switch(i){
case 0 ... 5 :
    cout << "The temperature is low" << endl;
    break;
case 6 ... 25 :
    cout << "The temperature is perfect" << endl;
    break;
case 26 ... 45 :
    cout << "The temperature is high" << endl;
    break;
default :
    cout << "The temperature value is not in the range.";
}
    return 0;
}
