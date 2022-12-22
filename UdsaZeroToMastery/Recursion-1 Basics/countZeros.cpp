#include<bits/stdc++.h>
using namespace std;

int countZeros(int n){
    //baseCase
    if(n==0){
        return 0;
    }
    //recursive case
    int smallAns = countZeros(n/10);
    //calculations
    if(n%10==0) return smallAns + 1;
    else return smallAns;
}
int main(){
    int n;
    cin>>n;
    cout<<countZeros(n)<<endl;;
    return 0;
}