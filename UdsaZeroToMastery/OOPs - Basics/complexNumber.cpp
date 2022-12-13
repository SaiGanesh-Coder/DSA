#include<iostream>
using namespace std;

class complexNumber{
        int r,i;
        public:
        complexNumber(int r,int i){
            this->r=r;
            this->i=i;
        }
        void add(complexNumber const &c2){
            this->r+=c2.r;
            this->i+=c2.i;
        }
        void multi(complexNumber const &c1){
            int real = c1.r*this->r - c1.i*this->i;
            int imaginary = c1.r*this->i + c1.i*this->r;
            this->r = real;
            this->i = imaginary;
        }
        void display(){
            cout<<r<<"+"<<i<<"i"<<endl;
        }
};

int main(){
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    complexNumber c1(real1,imaginary1);
    complexNumber c2(real2,imaginary2); 

        int choice;
        cout<<"Enter 1 for addition"<<endl<<"Enter 2 for multiplication"<<endl;
        cin>>choice;
       if(choice == 1){
        c1.add(c2);
        c1.display();
       }
       else if(choice == 2){
        c2.multi(c1);
        c2.display();
       }

        return 0;
}