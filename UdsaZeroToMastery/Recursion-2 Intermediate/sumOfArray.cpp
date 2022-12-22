#include<bits/stdc++.h>
using namespace std;

//solving array from front
/*int sumOfArray(int a[],int n){
    if(n==0) return a[0];
    return a[0]+sumOfArray(a+1,n-1);
}*/

//solving array from back
/*int sumOfArray(int a[],int n){
    if(n==0) return 0;
    return a[n-1] + sumOfArray(a,n-1);
}*/

//Itterate array with i
int sumOfArray(int a[],int n,int i){
    if(i==n) return 0;
    return a[i] + sumOfArray(a,n,i+1);
}

int main(){
    int n,i=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum = sumOfArray(a,n,i);
    cout<<sum;
    return 0;
}