#include<bits/stdc++.h>
using namespace std;

/*bool checkElement(int a[],int n,int key){
        if(n==0) return false;
        if(a[0]==key) return true;
        return checkElement(a+1,n-1,key);
}*/

/*bool checkElement(int a[],int n,int key){
    if(n==0) return false;
    if(a[n-1]==key) return true;
    return checkElement(a,n-1,key);
}*/

bool checkElement(int a[],int n,int key,int i){
         if(i==n) return false;
         if(a[i]==key) return true;
         //else return false;
         return checkElement(a,n,key,i+1);
}

int main(){
    int n,key,i=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    if(checkElement(a,n,key,i)){
        cout<<"Key is present";
    }else{
        cout<<"Key is not present";
    }
    return 0;
}