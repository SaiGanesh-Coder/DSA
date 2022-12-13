#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s1;
    s1.display();

    Student s2;
    s2.display();

    Student *s3 =  new Student;
    s3->display();

    cout<<"Parameterized Constructor Demo"<<endl;
    Student s4(10);
    s4.display();

    Student *s5 = new Student(20);
    s5->display();

    Student s6(21,172);
    s6.display();
    return 0;
}