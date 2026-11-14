#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"--Leap year Checker--\n";
    cout<<"Enter Year : ";
    cin>>n;
    if((n%4 == 0 && n%100 != 0) || (n%400 == 0)){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
    return 0;
}
/* at least one condition must true || and && operator used when both condition must true */