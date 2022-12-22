#include<bits/stdc++.h>
using namespace std;

/*bool checkElement(int a[],int n,int key){
        if(n==0) return false;
        if(a[0]==key) return true;
        return checkElement(a+1,n-1,key);
}*/

bool checkElement(int a[],int n,int key){
    if(n==0) return false;
    if(a[n]==key) return true;
    return checkElement(a,n-1,key);
}

int main(){
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    if(checkElement(a,n,key)){
        cout<<"Key is present";
    }else{
        cout<<"Key is not present";
    }
    return 0;
}