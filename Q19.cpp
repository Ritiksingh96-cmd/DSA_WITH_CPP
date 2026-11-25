#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    for(int i = 0; i < size;i++){
        if(arr[i] == key){
            cout<<"Array found at index : "<<i;
            return true;
        }
    }
    return false;
}

int main(){
    int size = 5;
    int arr[size] = {4,6,7,8,3,6};
    int key = 6;
    if (!linearSearch){
        cout<<"Array not found ";
    }
    return 0;
}