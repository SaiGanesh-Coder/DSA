#include<iostream>
using namespace std;

class thisDemo{
    int a;
    public:
     thisDemo(int a){
        this->a=a;              //Here we used THIS keyword to identify the address of t object
     }
     void display(){
        cout<<a<<endl;
     }
};

int main(){
    thisDemo t(5);
    t.display();
    return 0;
}