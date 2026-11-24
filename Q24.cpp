/*Write a Program to Compare Two Strings.*/
#include<iostream>
using namespace std;

void compareTo(string j ,string p){
    int a = j.compare(p);
    if(a == 0){
    cout<<"equal";
    }
    else{
    cout<<"not equal";
    }
}

int main(){
    string j = "Ritik";
    string p = "Ritik";

    compareTo(j,p);
    return 0;
}