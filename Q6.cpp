/*Q6. Write a Program to Find Compound Interest.*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float principal;
    float rate;
    int time;
 
    cout<<"Enter Principal Amount : ";
    cin>>principal;
    cout<<"Enter rate : ";
    cin>>rate;
    cout<<"Time Duration : ";
    cin>>time;

    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;
    cout<<"Compound Interest : "<<CI;

    return 0;
}