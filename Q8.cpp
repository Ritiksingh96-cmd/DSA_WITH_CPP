/*C++ Program to Check Whether Number is Even or Odd*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your Desired no : ";
    cin>>n;

    if(n%2 == 0){
        cout<<"Even no : "<<n;
    }
    else{
        cout<<"Odd no : "<<n;
    }
return 0;
}