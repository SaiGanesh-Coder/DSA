#include<iostream>
using namespace std;

class Student{
    public:
        int age;
        const int rollnumber;
        int &x;                  // age referance variable

        Student(int r,int age) : rollnumber(r),age(age),x(this->age){                 //Need to do INITIALIZATION to assign values for CONST varaibles
        //rollnumber = r;        //Wrong Approach                          //also works for normal varirables         
        }
        void display(){
            cout<<age<<"\t"<<rollnumber<<endl;
        }
};