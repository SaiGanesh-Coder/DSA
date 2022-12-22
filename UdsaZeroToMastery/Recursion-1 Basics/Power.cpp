#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    //BASE CASE
    if(n==0){
        return 1;
    }
    //RECURSIVE CASE
    int smallAns = power(x,n-1);
    //CALCULATIONS
    return x*smallAns;; 
}

int main(){
    int x,n;
    cin>>x>>n;
    int ans = power(x,n);
    cout<<ans;
    return 0;
}