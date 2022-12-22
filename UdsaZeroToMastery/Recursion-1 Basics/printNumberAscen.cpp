#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){
    //baseCase
    if(n==0){
        return;
    }
    //recursive case
    printNumber(n-1);       //1 2 3 4 ......n-1

    cout<<n<<"  ";
    return;   //optional
}
void printNumber2(int n){
    //baseCase
    if(n==0){
        return;
    }
    cout<<n<<"  ";
    //recursive case
    printNumber2(n-1);       //n-1......2 1

    return;   //optional
}
int main(){
    int n;
    cin>>n;
    printNumber(n);
    cout<<endl;
    printNumber2(n);
    return 0;
}