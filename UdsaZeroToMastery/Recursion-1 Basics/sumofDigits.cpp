#include<bits/stdc++.h>
using namespace std;

int sumofDigits(int n){
    //base case
    if(n<=0) return 0;
    ///recursive case 
    int smallAns = sumofDigits(n/10);
    //calculations
    return smallAns + n%10;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofDigits(n);
    return 0 ;
}