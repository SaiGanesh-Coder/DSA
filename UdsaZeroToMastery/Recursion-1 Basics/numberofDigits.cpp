#include<bits/stdc++.h>
using namespace std;

int numberofDigits(int n){
    //base case
    if(n==0) return 0;
    //recursive case
    int smallAns = numberofDigits(n/10);
    ///calculations
    return smallAns + 1;
}

int main(){
    int n;
    cin>>n;
    cout<<numberofDigits(n)<<endl;
    return 0;
}