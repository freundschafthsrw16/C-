#include <iostream>

using namespace std;
void show(int[], int);
int main()
{

    int numbers[]={0,1,2,3,4};
    int length= 5;
    show(numbers, length);
    return 0;
}
void show(int numbers[], int length){
    for(int counter=0; counter < length ; counter ++){
      cout << numbers[counter] << endl;
    }
};
