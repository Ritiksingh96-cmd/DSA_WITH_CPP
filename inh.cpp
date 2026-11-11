/*Derived class Cpp */
#include<iostream>
using namespace std;

class a{
    public:
       void show(){
        cout<<"I'm in Base Class";
       }
};
class b : public a{
    public:
      void show(){
        cout<<"I'm in Derived class";
      }
};
int main(){
    a k;
    a *bptr;
    bptr = &k;
    bptr -> show();
    return 0;
}