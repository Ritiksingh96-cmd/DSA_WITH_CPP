#include<bits/stdc++.h>
using namespace std;

void linear(vector<int>&nums,int key){
    for(int i = 0; i < nums.size();i++){
        if(nums[i] == key){
            cout<<"Element found at index : "<<i;
            return;
        }
    }
    cout<<"Element not found";
}
int main(){
    int n,key;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i < n;i++){
        cin>>nums[i];
    }
    cout<<"Enter Element Your need to search : ";
    cin>>key;
    linear(nums,key);
    return 0;
}
