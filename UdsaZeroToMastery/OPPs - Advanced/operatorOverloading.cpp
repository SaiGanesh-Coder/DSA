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
        Fraction add(Fraction const &f2) const{
            int lcm = this->denominator*f2.denominator;
            int x = this->numerator*f2.denominator;
            int y = this->denominator*f2.numerator;
            int num = x + y;

            //this->numerator = num;
            //this->denominator = lcm;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction operator+(Fraction const &f2) const{
            int lcm = this->denominator*f2.denominator;
            int x = this->numerator*f2.denominator;
            int y = this->denominator*f2.numerator;
            int num = x + y;

            //this->numerator = num;
            //this->denominator = lcm;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
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
        Fraction multi(Fraction const &f1) const{
            //this->numerator*=f1.numerator;
            //this->denominator*=f1.denominator;
            int num = this->numerator*f1.numerator;
            int lcm = this->denominator*f1.denominator;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction operator*(Fraction const &f1) const{
            //this->numerator*=f1.numerator;
            //this->denominator*=f1.denominator;
            int num = this->numerator*f1.numerator;
            int lcm = this->denominator*f1.denominator;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }

        bool operator==(Fraction const &f2) const{
                return(this->numerator  == f2.numerator && this->denominator == f2.denominator);
        }
        Fraction& operator++(){        //pre increment      //RETURN BY REFERANCE so that copy will not be created i.e buffer
            this->numerator+= 1*this->denominator;
            simplify();
            return *this;
        }
        Fraction operator++(int){ //post increment
                Fraction fnew(this->numerator,this->denominator);
                this->numerator+=1*this->denominator;
                simplify();
                fnew.simplify();
                return fnew;
        }
        Fraction& operator+=(Fraction const &f12){
            int lcm = this->denominator*f12.denominator;
            int x = this->numerator*f12.denominator;
            int y = this->denominator*f12.numerator;
            int num = x + y;

            this->numerator = num;
            this->denominator = lcm;
            simplify();
            return *this;
        }
        void display() const{
            cout<<numerator<<"/"<<denominator<<endl;
        }                        
};