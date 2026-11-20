/* Write a Program to Calculate the Average of All the Elements Present in an Array.*/

#include<iostream>
using namespace std;

int average(int arr[],int size){
    int sum = 0,average;
    for(int i = 0; i < size;i++){
        sum+=arr[i];
    }
    average = sum/size;
    cout<<average;
}
int main(){
    int size = 4;
    int arr[size] = {6,8,9,9};
    average(arr,size);
}