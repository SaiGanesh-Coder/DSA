#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
     Student s1;
     Student *s2 = new Student; 

     s1.setAge(21,32);
     s2->setAge(20,123);

     s1.display();
     s2->display();

     return 0;
}