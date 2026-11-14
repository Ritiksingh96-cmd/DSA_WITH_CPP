#include<iostream>
using namespace std;

int main(){
    char arr[5] = {'a','e','i','o','u'};
    char dd;
    cout<<"Enter char : ";
    cin>>dd;
    bool isVowel = false;
    for(int i = 0; i < 5; i++){
        if(arr[i] == dd){
            isVowel = true;
            break;
        }
    }

    if(isVowel){
        cout<<"Vowel : "<<dd;
    } else{
        cout<<"Consonant : "<<dd;
    }
    return 0;
}