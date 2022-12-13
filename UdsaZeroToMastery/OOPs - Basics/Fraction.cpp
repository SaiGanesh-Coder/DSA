#include<iostream>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int numerator,int denominator){
            this->numerator=numerator;
            this->denominator=denominator;
        }
        void add(Fraction const &f2){
            int lcm = this->denominator*f2.denominator;
            int x = this->numerator*f2.denominator;
            int y = this->denominator*f2.numerator;
            int num = x + y;

            this->numerator = num;
            this->denominator = lcm;
            simplify();
        }
        void simplify(){
            int gcd = 1;
            int j = min(this->numerator,this->denominator);
            for(int i=1;i<=j;i++){
                if(this->numerator%i==0  &&  this->denominator%i==0){
                    gcd =i;
                }
            }
            this->numerator /= gcd;
            this->denominator /= gcd;
        }
        void multi(Fraction const &f1){
            this->numerator*=f1.numerator;
            this->denominator*=f1.denominator;
        }
        void display(){
            cout<<numerator<<"/"<<denominator<<endl;
        }                        
};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f2.multi(f1);
    f1.display();
    f2.display();
    return 0;
}