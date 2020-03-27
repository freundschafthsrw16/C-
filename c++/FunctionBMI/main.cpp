#include <iostream>
#include <cmath>


using namespace std;
void bmi(float a, float b){
   int i;
   i=round(a/(b*b));
   cout << "Your bmi is : " << i << endl;
   switch (i){
   case 25 ... 100 :
    cout << " You have overweight \n";
    break;
   case 18 ... 24 :
    cout << "You are healthy \n";
    break;
   default :
    cout << "The entered values for your weight and height are not valid";
   };

}

int main()
{
    float weight,height;
    cout << "Please Enter your weight and height respectively" << endl;
    cin >> weight >> height;
    cout << "\n";
    bmi(weight, height);
    return 0;
}
