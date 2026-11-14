/*C++ Program To Find Area And Perimeter Of Rectangle*/
#include<iostream>
using namespace std;

int main(){
    int choice;
    float area,length,breath,perimeter;
    cout<<"\n-----Enter Your choice-----\n";
    cout<<"\nPress 1 for Area\n ";
    cout<<"\nPress 2 for perimeter\n";
    cin>>choice;
    cout<<"Enter Length : ";
    cin>>length;
    cout<<"Enter Breath : ";
    cin>>breath;
    switch(choice){
        case 1:
             area = length * breath;
             cout<<"Area of Rectangle : "<<area;
             break;
        case 2:
        perimeter = 2*(length + breath);
        cout<<"Perimeter of Rectangle : "<<perimeter;
        break;

        default:
         cout<<"Invalid input";
             
    }
return 0;
}