#include<bits/stdc++.h>
using namespace std;

//USING VECTOR
/*void storeElementsPosition(int a[],int n,int key,int i,vector<int> &pos){
    if(i==n) return;
    if(a[i]==key) pos.push_back(i);
    storeElementsPosition(a,n,key,i+1,pos);
}*/

//USING ARRAY
int storeElementsPosition(int a[],int n,int key,int i,int pos[],int j){
    if(i==n) return 0;
    if(a[i]==key){
        pos[j]=i;
        return 1 + storeElementsPosition(a,n,key,i+1,pos,j+1);
    }
   return 0 + storeElementsPosition (a,n,key,i+1,pos,j);
}

int main(){
    int n;
    cin>>n;
    int a[n],key,i=0,j=0;
    //vector<int> pos;
    int pos[10];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>key;
    //storeElementsPosition(a,n,key,i,pos,0);
    //for(int i=0;i<pos.size();i++) cout<<pos[i]<<"  ";
    int count = storeElementsPosition(a,n,key,i,pos,j);
    for(int i=0;i<count;i++) cout<<pos[i]<<"  ";
    return 0;
}