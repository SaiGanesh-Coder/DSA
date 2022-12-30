#include<bits/stdc++.h>
using namespace std;

/*void countOccurance(int a[],int n,int key,int &ans){
    if(n==-1) return;
    if(a[n]==key) ans++;
    countOccurace(a,n-1,key,ans);
}*/

int countOccurance(int a[],int n,int key,int i){
        if(i==n) return 0;
        if(a[i]==key) return 1+countOccurance(a,n,key,i+1);
        else return 0+countOccurance(a,n,key,i+1);
}       

int main(){
    int n;
    cin>>n;
    int a[n],key;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    int ans,i=0;
    cout<<countOccurance(a,n,key,i);
    return 0;
}