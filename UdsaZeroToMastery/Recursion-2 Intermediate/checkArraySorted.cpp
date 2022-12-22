#include<bits/stdc++.h>
using namespace std;

//front is smaller array
bool isSorted(int a[],int n){
    //base case
    if(n==0 || n==1) return true;
    if(a[0]>a[1]) return false;
    //recursive case
    bool isSmallerSorted = isSorted(a+1,n-1);
    //calculations
    return isSmallerSorted;
}

//from back it is smaller array
bool isSorted2(int a[],int n){
    //base case
    if(n==0 || n==1) return true;   
    if(a[n-2]>=a[n-1]) return false;
    //recursive case   
    bool isSmallerSorted = isSorted2(a,n-1);
    //calculations
    return isSmallerSorted;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isSorted2(a,n)) cout<<"Array is sorted";
    else cout<<"Array is not sorted";
}