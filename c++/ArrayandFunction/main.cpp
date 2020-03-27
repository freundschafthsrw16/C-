#include <iostream>

using namespace std;
void Display(int num[],int limit);
//void Display(int[],int);
int main()
{
    int num[]={111,11,22,33,44,55,66,77,88,99,10,11,12},limit;
    cout << "Please Enter the limit value :" << endl;
    cin >> limit;
    Display(num,limit);
    return 0;
}
void Display(int num[],int limit){
    for(int counter=0;counter<limit;counter++){
        cout << num[counter]<< endl;
    }
}
