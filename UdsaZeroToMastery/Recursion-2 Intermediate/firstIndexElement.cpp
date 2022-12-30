#include<bits/stdc++.h>
using namespace std;

int firstIndexElement(int a[],int n,int key,int i){
      if(i==n) return -1;
      if(a[i]==key) return i;
      return firstIndexElement(a,n,key,i+1);
}

int main(){
    int n,key,i=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    cout<<firstIndexElement(a,n,key,i);
    return 0;
}