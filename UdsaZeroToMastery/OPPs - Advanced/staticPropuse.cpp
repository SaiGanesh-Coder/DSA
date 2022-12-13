#include<iostream>
#include "staticProp.cpp"
using namespace std;

int main(){
    staticProp s1(172,21);
    staticProp s2(72,19);
    s1.display();
    s2.display();                              // to call static functions className :: fucntionName
    cout<<staticProp :: totalStudents<<endl;
    return 0;
}