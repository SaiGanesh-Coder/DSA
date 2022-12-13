#include<iostream>
using namespace std;

class copyConstructor{
      int age;
    public:
      int rollno;
      copyConstructor(int a,int r){
          age=a;
          rollno=r;
      }
      void display(){
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
      }
};

int main(){
    copyConstructor c(10,100);    // parameterized constructor user defined
    c.display();


    cout<<"Using copyConstructor "<<endl;
    copyConstructor c1(c);        // copy constructor inbuild
    c1.display();

    cout<<"Creating objects dynamically"<<endl;
    copyConstructor *c2 = new copyConstructor(20,200);
    c2->display();
    copyConstructor *c3 = new copyConstructor(*c2);  
    c3->display();
    copyConstructor *c4 = new copyConstructor(c);    
    copyConstructor c5(*c4);
    cout<<"c5 display : "<<endl;
    c5.display();  
    return 0;
}