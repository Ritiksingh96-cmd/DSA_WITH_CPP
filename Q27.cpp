#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>&arr,int key){
    int low = 0;
    int high = arr.size() - 1;
    int mid = low + (high-low) /2;
    while(low <= high){
        int mid = low + (high-low) /2;

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            low = mid + 1;

        }
        else{
            high = mid - 1;
        }
        return -1;
    }
    
}
int main(){
    vector<int> arr = {4,5,2,3,65,43,53,35};
    sort(arr.begin(),arr.end());
    int key = 5;
    int result = binarySearch(arr,key);
    if(result == -1){
        cout<<"Elemet not found";
    }
    else{
        cout<<"Element found at index"<<result;
    }
}