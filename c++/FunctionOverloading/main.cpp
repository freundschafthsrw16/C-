/** \brief : It is a nice function about overloading, we have to functions with the exactly the same name.
 *          since they take different parameters they can be differently distinguished.
 *
 * \param
 * \param
 * \return
 *
 */

#include <iostream>

using namespace std;
void Display();
void Display(string);

int main()
{
    string name;
    cout << "Please Enter your name" << endl;
    cin >> name;
    Display();

    Display(name);
    return 0;
}

void Display(){
cout << "Hallo cleaver Masoud" << endl;
}

void Display(string name){
cout << "Hallo cleaver Dear " << name;
}
