#include <iostream>

using namespace std;
class BookStore{
public:
void Display(){
cout<<"Please buy more book"<<endl ;
};

int main()
{
    int a;
    BookStore mein;
    cout << "Enter an arbitrary number" << endl;
    cin>>a;
    for(int i=0;i<a;i++){
     mein.Display();
    }

return 0;
}
