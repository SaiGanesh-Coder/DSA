#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    /// BASE CASE  the smallest problem whose solution we already know
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    /// RECURSIVE CASE 
    int  smallOutput1 = fibo(n-1);
    int  smallOutput2 = fibo(n-2);
    //Calculations
    return smallOutput1+smallOutput2;
}

int main(){
    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<ans;
    return 0;
}