/*C++ Program To Find Sum of First N Natural Numbers*/

#include<iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"Enter N natural no : ";
    cin>>n;
    sum = n*(2+(n - 1))/(2);
    cout<<"Sum of First n natural no : "<<sum;
    return 0;
}