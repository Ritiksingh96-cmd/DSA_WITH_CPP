#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n = 5;
    char job[] = {'A','B','C','D','E'};
    int deadline[] = {2,1,2,1,3};
    int profit[] = {100,19,27,25,15};

    for(int i = 0; i < n - 1;i++){
        for(int j = i + 1; j < n;j++){
            if(profit[i] < profit[j]){
                swap(profit[i],profit[j]);
                swap(deadline[i],deadline[j]);
                swap(job[i],job[j]);
            }
        }
    }
    int slot[6] = {0};
    int totalprofit = 0;
    for(int i = 0; i < n;i++){
        for(int j = deadline[i]; j > 0; j--){
            if(slot[j] == 0){
                slot[j] = job[i];
                totalprofit += profit[i];
                break;
            }
        }
    }
    cout<<"Scheduled Jobs : ";
    for(int i = 1; i <= 5; i++){
        if(slot[i] != 0){
            cout<<(char)slot[i]<< " ";
        }
    }
    cout<<"\n Maximum Profit : "<<totalprofit;
    return 0;
}