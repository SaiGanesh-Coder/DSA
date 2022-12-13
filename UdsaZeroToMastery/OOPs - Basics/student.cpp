#include<iostream>
using namespace std;
class Student{

        int age;

    public :
        //default constructor
        Student(){
            cout<<"Constructor 1 called "<<endl;
        }

        //parameterized constructor
        Student(int r){
            cout<<"Constructor 2 called "<<endl;
            rollnumber = r;
        }

        Student(int a,int r){
            cout<<"Constructor 3 called"<<endl;
            age=a;
            rollnumber=r;
        }

        int rollnumber;

        void display(){
            cout<<age<<"   "<<rollnumber<<endl;
        }
        int getAge(){
            return age;
        }
        void setAge(int a,int password){                // We get the properties to add CONSTRAINTS...
            if(password != 123){
                return; 
            }
            if(a<0){
                return;
            }
            age=a;  
        }

        ~Student(){        /// our destructor will be called 
            cout<<"Destructor called"<<endl;
        }
};

