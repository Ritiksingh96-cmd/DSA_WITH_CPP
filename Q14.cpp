/*C++ Program To Find Factorial Of A Number*/
#include<iostream>
using namespace std;

int main(){
    int n,fact = 1;
    cout<<"Enter no Factorial u want  : ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(n > 0){
            fact = fact * i;
        }
        else{
            cout<<"Invalid input";
        }
    
    }
    cout<<"Factorial : "<<fact;
    return 0;
}