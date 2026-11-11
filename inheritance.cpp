#include<iostream>
using namespace std;

class a{
    public:
    int a,b,sum;

    void Sum(){
        cout<<"Enter First Digit : ";
        cin>>a;
        cout<<"Enter Second Digit : ";
        cin>>b;
        sum = a + b;
    }
};
class b : public a{
public:
    void display(){
        cout<<"Sum of two digits : "<<sum;
    }
};
int main(){
    b l;
    l.Sum();
    l.display();
    return 0;
}