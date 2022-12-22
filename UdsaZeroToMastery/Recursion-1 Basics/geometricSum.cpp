#include<bits/stdc++.h>
using namespace std;

double geometricSum(int n){
    //baseCase
    if(n==0){
        return 1;
    }
    //recursive case
    double smallAns = geometricSum(n-1);
    //calculations
    return 1.0/(pow(2,n)) + smallAns;
}

int main(){
    int n;
    cin>>n;
    cout<<geometricSum(n)<<endl;
    return 0;
}