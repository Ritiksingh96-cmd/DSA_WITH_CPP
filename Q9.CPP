/*C++ Program to Find Largest Among Three Numbers*/
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Value of a : ";
    cin>>a;
    cout<<"Enter Value of b : ";
    cin>>b;
    cout<<"Enter Value of c : ";
    cin>>c;
    if(a >= b && a >= c){
        cout<<"A is the largest no among "<<a;
    }
    else if (b >= a && b >= c)
    {
        cout<<"B is the largest no among "<<b;
    }
    else
    {
        cout<<"C is the largest no among "<<c;
    }
    return 0;
}