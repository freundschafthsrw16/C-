#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(j=0;j<3;j++){
    cout << "\nPlease Enter your number : " << endl;
    cin >> i;
    switch(i){
case 1 :
    cout << "it is a small number" << endl;
    break;
case 2 :
    cout << "it is getting better, but you still need to work hard" << endl;
    break;
case 3 :
    cout << "Perfect";
    break;
default :
    cout << "please enter a valid number" << endl ;

    }
    }


    return 0;
}
