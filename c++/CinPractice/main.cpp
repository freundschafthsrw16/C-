#include <iostream>

using namespace std;
/**
 * @brief : A simple code to practice cin in c++
 *
 *  Ask for two input from the client and assign them to two declared variables
 *
 * @param retries : age and weight as input
 *
 */
int main()
{
    int age, weight;
    cout << "Please Enter Your Age and Weight:";// Enter a space between inputs, Enter also works
    cin >>age>>weight;
    cout << "Your Age is : " << age<<" and Your weight is : " << weight <<" Kg";
    return 0;
}
