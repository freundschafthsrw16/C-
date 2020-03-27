#include <iostream>
#include <string>
using namespace std;
/** \brief : I have included string, but it is not essential.
 *
 * \param : modularization has also applied in this function/ creating a function outside of the main and trying to
 * the main as small as possible.
 * \param
 * \return
 *
 */
void check(string){
     string name;
    cout << "Please Enter your name :" << endl;
    cin >> name;
    if(name == "masoud")
        cout << "The name is correct"<< endl;

    else{
        cout << "The name is false, Please Enter the correct name" << endl;
        check(name);
        }




}
int main()
{
       string name;
       check(name);// function called
    return 0;
}
