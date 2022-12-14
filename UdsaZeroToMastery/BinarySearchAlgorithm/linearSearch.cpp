#include<bits/stdc++.h>
using namespace std;

void takeInput(int S[],int n){
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>S[i];
    }
}
void linearSearch(int S[],int key,int n){
    int Flag=0;
    for(int i=0;i<=n-1;i++){
        if(S[i]==key){
            cout<<"The key is present at the index : "<<i<<endl;;
            Flag++;break;
        }
        cout<<i;
    }
        if(Flag==0) cout<<"Key is not found"<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int S[n];
    takeInput(S,n);
    cout<<"Enter the key to search : ";
    int key;
    cin>>key;
    linearSearch(S,key,n);
    return 0;
}