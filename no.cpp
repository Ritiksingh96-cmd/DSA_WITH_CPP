/* Bank Sys*/
#include<iostream>
using namespace std;

class Bank{
    private:
        float account_balance;
        string account_no;
    public:
        float amount;
         void input_info(){
            cout<<"Create account_no : ";
            cin>>account_no;
            cout<<"initialized Balance : ";
            cin>>account_balance;
         }
         void deposit(){
            cout<<"Enter amount you want to deposit : ";
            cin>>amount;
            account_balance += amount;
            cout<<"Updated Balance : "<<account_balance<<endl;
         }
         void withdraw(){
            cout<<"Enter amount you want to withdrawn : ";
            cin>>amount;
            account_balance -= amount;
            cout<<"Update Balance : "<<account_balance<<endl;
         }
        void display(){
            cout<<"Account_no : "<<account_no<<endl;
            cout<<"Account_Balance : "<<account_balance<<endl;
        }
};
int main(){
    Bank b;
    b.input_info();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}