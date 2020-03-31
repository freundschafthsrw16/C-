#include <iostream>

using namespace std;
int i=10;// i is a global variable so it can be called in main as well in any other function
void Display(){
 cout << "i is a global variable : " << i << endl;
}


int main()
{
    Display();
    cout << "i is a global variable : " << i;
    return 0;
}
