#include<bits/stdc++.h>
using namespace std;

bool palindrome(int a[],int s,int e){
     if(s>e) return true;
     if(a[s]==a[e]){
        return palindrome(a,s+1,e-1);
     }else{
        return false;
     }
}

int main(){
    int n;
    cin>>n;
    int a[n],s=0,e=n-1;
    for(int i=0;i<n;i++) cin>>a[i];
    palindrome(a,s,e);
    if(palindrome(a,s,e)) cout<<"It is palindrome";
    else cout<<"It is not palindrome";
    return 0;
}  