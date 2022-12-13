#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
    // creating objects statically
    Student s1;
    Student s2;
    Student s3,s4,s5;
    
    //creating objects dynamically
    Student *s6 = new Student;

    //s1.age=24;
    s1.rollnumber=100; 
    
    s1.display();
    s2.display();

    cout<<"S1 age : "<<s1.getAge()<<endl;
    cout<<"S2 age : "<<s2.getAge()<<endl;

    //cout<<s1.age<<endl;
    cout<<s1.rollnumber<<endl;

    //(*s6).age=20;
    (*s6).rollnumber=172;

    //s6->age = 20;
    s6->rollnumber = 172;
    s6->display();
    cout<<"S6 age : "<<s6->getAge()<<endl;

    return 0;
}