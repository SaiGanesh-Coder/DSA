#include<iostream>
#include<algorithm>            //need to include this so sort() will work
using namespace std;            // from now on use #include<bits/stdc++.h>

void takeInput(int S[],int n){
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>S[i];
    }
}
void printArray(int S[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<S[i]<<"  ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int S[n];
    takeInput(S,n);
    cout<<"UnSorted Array : ";
    printArray(S,n);
    sort(S,S+n);
    cout<<"\nSorted Array : ";
    printArray(S,n);
    return 0;
}