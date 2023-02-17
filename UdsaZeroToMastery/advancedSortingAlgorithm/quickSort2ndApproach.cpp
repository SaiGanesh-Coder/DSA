#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
    int pivot=a[e];
    int i=s;
    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            swap(a[i++],a[j]);
        }
    }
    swap(a[i],a[e]);
    return i;
}

void quickSort(int a[],int s,int e){
    if(s>=e) return;
    int p = partition(a,s,e); 
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Elements Before quickSort : ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    quickSort(a,0,n-1);
    cout<<"Elements After quickSort : ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}