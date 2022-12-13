#include<iostream>
#include "operatorOverloading.cpp"

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    //f1.add(f2);
    //f2.multi(f1);

    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    Fraction f5 = f1.multi(f2);
    Fraction f6 = f1*f2;
    //f1=f2;
    f1.display();
    f2.display();
    f3.display();
    f4.display();
    f5.display();
    f6.display();
    if(f1==f2){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
    Fraction f7(10,2);
    //++f7;
    //Fraction f8 = ++f7;
    //++(++f7);
    //f8.display();
    //Fraction f9 = ++(++f7);
    //f9.display();
    Fraction f10 = f7++;                //   (f7++)++ nesting is not allowed
    f10.display();                   
    f7.display();
    
    Fraction f11(10,2);
    Fraction f12(15,4);
    f11 += f12;
    f11.display();
    return 0;
}