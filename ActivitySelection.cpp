#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int start[] = {1,3,0,5,8,5};
    int finish[] = {2,4,6,7,9,9};
    for(int i = 0; i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(finish[i] > finish[j]){
                swap(finish[i],finish[j]);
                swap(start[i],start[j]);
            }
        }
    }
    cout<<"Selected Activities : ";
    int lastfinish = -1;
    for(int i = 0; i < n; i++){
        if(start[i] >= lastfinish){
            cout<<"( "<<start[i]<<" , "<<finish[i]<<" ) ";
            lastfinish = finish[i];
        }
    }
    return 0;
}
