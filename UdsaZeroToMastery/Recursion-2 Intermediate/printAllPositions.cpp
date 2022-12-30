#include<bits/stdc++.h>
using namespace std;

void printAllPositions(int a[],int n,int key){
    if(n==-1) return;
    if(a[n-1]==key) cout<<n-1<<"  ";
    printAllPositions(a,n-1,key);
}

int main(){
    int n;
    cin>>n;
    int a[n],key;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    printAllPositions(a,n,key);
    return 0;
}