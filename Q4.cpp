/*Write a Program to Swap Two Numbers.*/
#include<iostream>
using namespace std;

int main(){
    int x = 78, y = 32,temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<y;
    return 0;
}