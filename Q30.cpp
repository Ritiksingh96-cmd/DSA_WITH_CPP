#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    vector<int>temp;
    int i = low , j = mid + 1;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
        while(i <= mid)
        temp.push_back(arr[i++]);
        while(j <= high)
        temp.push_back(arr[j++]);
    
    for(int i = low; i <= high;i++){
        arr[i] = temp[i-low];
    }
}
void merge_sort(int a[],int low,int high){
    if(low >= high)
    return;
    int mid = (low + high)/2 ;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge_Sort(a,low,high,mid);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j = 0;j < n - 1;j++){
        cin>>arr[n];
    }
    cout<<"Original Array";
    for(int i = 0; i < n;i++){
        cout<<arr[i];
    }
    merge_sort(arr,0,n-1);
    cout<<"Sorted Array:";
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}