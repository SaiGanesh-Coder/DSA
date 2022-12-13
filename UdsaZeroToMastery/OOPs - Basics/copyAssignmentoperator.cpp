#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s(10,100);
    Student s2(20,200);

    Student *s3 = new Student(30,300);
    s2 = s;                            //copyAssignmentOperator
    *s3=s;
    s2=*s3;

    s3->display();
    delete s3;
    return 0;
}