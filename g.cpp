#include<iostream>
using namespace std;

class a{
public:
    float salary;
    string username;
    string Dept_id;

    void input_details(){
        cout<<"Enter Username : ";
        cin>>username;
        cout<<"Enter Employee Department : ";
        cin>>Dept_id;
        cout<<"Enter Employee Salary : ";
        cin>>salary;
    }
};
class b : public a{
public: 
    void display(){
        cout<<"Employee Username : "<<username<<endl;
        cout<<"Employee Department : "<<Dept_id<<endl;
        cout<<"Employee Salary : "<<salary<<endl;
    }
};
int main(){
   b h;
   h.input_details();
   h.display();
    return 0;
}
