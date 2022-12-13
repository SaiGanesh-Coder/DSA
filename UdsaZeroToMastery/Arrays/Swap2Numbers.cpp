#include<iostream>
using namespace std;

int main(){
    int a=2,b=5;
    cout<<"Values Before Swapping"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"Values After Swapping"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}