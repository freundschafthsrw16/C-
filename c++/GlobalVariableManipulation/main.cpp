#include <iostream>

using namespace std;
int x=1;
int add(int){
    return x++;
}
int main()
{
    cout << "x was :" << x << endl;
    cout << "And now is :" << add(x) << endl;
    cout << "And now at the last :" << x;
    return 0;
}
