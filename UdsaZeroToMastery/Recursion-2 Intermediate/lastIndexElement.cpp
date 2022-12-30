#include<bits/stdc++.h>
using namespace std;
/*
int lastElementIndex(int a[],int n,int key){
        if(n==0) return -1;
        if(a[n-1]==key) return n-1;
        return lastElementIndex(a,n-1,key);
}*/

int lastElementIndex(int a[],int n,int key,int i){
    if(i==n) return -1;
    int indexInRem = lastElementIndex(a,n,key,i+1);
    if(indexInRem == -1){
        if(a[i]==key) return i;
        else return -1;
    }else return indexInRem;
}

int main(){
    int n;
    cin>>n;
    int a[n],key,i=0;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    cout<<lastElementIndex(a,n,key,i);
    return 0;
}