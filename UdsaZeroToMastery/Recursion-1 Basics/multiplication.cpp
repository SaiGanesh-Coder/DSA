#include<bits/stdc++.h>
using namespace std;

int multi(int m,int n){
    //base case
    if(n==0) return 0;
    //recursive case
    int smallAns = multi(m,n-1);
    //calculations
    return smallAns + m;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<multi(m,n);
    return 0;
}