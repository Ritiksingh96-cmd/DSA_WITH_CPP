#include<iostream>
using namespace std;

class student{
    public:
    int marks[5];
    double student_id;
   
    void input(){
        cout<<"Enter student_id : ";
        cin>>student_id;
        for(int i = 0; i <= 5;i++){
        cout<<"Enter Your marks serial eg(.E,H,M,S,SS) : ";
        cin>>marks[i];
        }
    }
          
};
class calcu : public student{
    public:
    int sum;
    int percentage;
       void calculate(){
        for(int i = 1; i < 5;i++){
             sum += marks[i];
        }
       }
       void perc(){
        float percentage = ((sum)/(500))*(100);
       }
};
class dispo : public calcu{
    public:
      void display(){
        cout<<"Student_id : "<<student_id;
        for(int i = 1; i < 5; i++){
            cout<<"Marks of student "<<i<<" : "<<marks[i]<<endl;
        }
        cout<<"Percentage : "<<percentage;
      }
};
int main(){
    dispo d;
    d.input();
    d.calculate();
    d.perc();
    d.display();
    return 0;
}