#include<iostream>
#include "dynamicArray.cpp"
using namespace std;

int main(){

    dynamicArray d;   //default constructor
    d.addElement(10);
    d.addElement(20);
    d.addElement(30);
    d.addElement(40);
    d.addElement(50);
    d.addElement(60);

    d.print();
    cout<<d.getCapacity()<<endl;

    dynamicArray d2(d);   //copy constructor
    dynamicArray d3;       //default constructor
    d3 = d;
    
    d.addElement(100,0);
    d.print();
    d2.print();
    d3.print();
    return 0;
}