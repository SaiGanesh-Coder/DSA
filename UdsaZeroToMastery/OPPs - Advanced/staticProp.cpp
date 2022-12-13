#include<iostream>
using namespace std;


class staticProp{
    
    public:
        int rollnumber;
        int age;
        int static totalStudents;         // Total number of students present in a class

        staticProp(int r,int a) : rollnumber(r),age(a){
            totalStudents++;
        }
        void display(){
            cout<<rollnumber<<"  "<<age<<endl;
        }
};  
int staticProp :: totalStudents = 0;         //initialize static data members