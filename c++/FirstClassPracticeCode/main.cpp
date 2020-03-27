#include <iostream>

using namespace std;
int multi(int);
class BookStore {
public:
void displaymassage(){
cout << "Please buy a book from our shop"<<endl;
}
};
int main(){
int a;
cout << "Enter a number"<< endl;
cin>> a;
BookStore myfirstBook;
for(int i=0;i<multi(a);i++){
cout<<i+1<<".";
myfirstBook.displaymassage();
}
return 0;
 }
 int multi(int a){
 return 2*a;
 };// end main


