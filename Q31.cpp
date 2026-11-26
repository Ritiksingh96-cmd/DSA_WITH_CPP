#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int low,int high){
    for(int i = low; i < high;i++){
        for(int j = low; j < high - 1;j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void insertion_sort(int arr[],int low,int high){
    for(int i = low + 1; i <= high;i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= low && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selection_sort(int arr[],int low,int high){
    for(int i = low; i < high;i++){
        int min = i;
        for(int j = i + 1; j <= high;j++){
            if(arr[min] > arr[j])
            min = j;
        }
        if(min != i)
        swap(arr[min],arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n],b[n],c[n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
        b[i] = arr[i];
        c[i] = arr[i];
    }
    bubble_sort(arr,0,n - 1);
    insertion_sort(b,0,n - 1);
    selection_sort(c,0,n - 1);
    cout<<"Bubble Sort : \n";
    for(int i = 0; i < n; i++){
     cout<<arr[i]<<" ";
    }
    cout<<"Insertion Sort :";
     for(int i = 0; i < n; i++){
        cout<<b[i]<<" ";
    }
    cout<<"Selection sort : ";
     for(int i = 0; i < n; i++){
    cout<<c[i]<<" ";
    }
    return 0;
}