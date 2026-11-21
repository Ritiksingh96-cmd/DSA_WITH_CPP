/*Write a Program to Find the Maximum and Minimum in an Array.*/
#include<iostream>
using namespace std;

void max(int arr[],int size){

int maxval = arr[0];
int minval = arr[0];

if ( size <= 0){
    cout<<"Array is Empty : ";
}
else{
    for(int i = 0; i < size; i++){
        if(arr[i] < minval){
            minval = arr[i];
        }
        else if(arr[i] > maxval){
            maxval = arr[i];
        }
        }

    }
   cout<<"Min value is : "<<minval;
   cout<<"Max Value is : "<<maxval;
}

int main(){
    int size = 4;
    int arr[size] = {3,5,6,7};
    max(arr,size);
    return 0;
}