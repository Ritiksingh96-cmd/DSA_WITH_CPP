/*Write a Program to Find the Length of a String.*/
#include<iostream>
#include<string>
using namespace std;

void lenFind(string name){
   int length = name.length();
   cout<<"Length of name in numerics : "<<length;
}
int main(){
    string name = "Tampu";
    lenFind(name);
    return 0;
}
