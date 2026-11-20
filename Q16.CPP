/*Write a Program to Check if Two Arrays Are Equal or Not.*/
#include<iostream>
using namespace std;

bool compare(int arr1[],int arr2[],int size){
    for(int i = 0; i < size;i++){
        if(arr1[i] != arr2[i]){
         return false;        
        }
    }
    return true;
}

int main(){
    int size = 3;
    int arr1[3] = {3,4,2};
    int arr2[3] = {3,4,3};
    if (compare(arr1,arr2,size)){
        cout<<"Equal ";
    }
    else{
        cout<<"Not Equal ";
    }
    return 0;
}
