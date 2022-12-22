#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1) return 1;   //BASE CASE 1st Step
    int smallAns = fact(n-1);   // 2nd Step Assumption Recursive Case
    int ans = n*smallAns;    // 3rd Step Calculations
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}