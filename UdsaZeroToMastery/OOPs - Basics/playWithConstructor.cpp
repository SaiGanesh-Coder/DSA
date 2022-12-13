#include<iostream>
#include "student.cpp"
using namespace std;

int main(){

    Student s1;    // Constructor 1 called

    Student s2(10);   // Constructor 2 called

    Student s3(10,100);    // Constructor 3 called

    Student s4(s3);    // Copy Constructor called

     s1 = s2;    //  Copy Assignment Operator called

    Student s5 = s3;   // Copy Constructor called

    return 0;
}