/*Q22. Write a Program to Rotate the Elements of a Matrix.*/
#include<iostream>
using namespace std;

const int max = 5;

void rotationMatrix(int arr[][max],int n,int k){
    for(int i = 0 ; i < n;i++){
        for(int j = 0; j < k;j++){
            if( k % 2 != 0){
              arr[i][j] = arr[j][i];
              cout<<"Array after kth rotation"<<arr[i][j]<<" , ";
        }
        else{
            cout<<"Array after kth rotation : "<<arr[i][j]<<" ,";
        }
    }
}
}

int main(){
    int n = 5;
    int k = 3;
    int arr[n][max] = { 
                        {3,4,5,4,5},
                        {5,5,3,4,5},
                        {3,4,5,2,2},
                        {7,9,0,7,2},
                        {4,2,1,4,5}

};
rotationMatrix(arr,n,k);
return 0;
}