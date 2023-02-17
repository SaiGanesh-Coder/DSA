#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
    int countSmaller=0;
    int pivot = a[e];
    for(int i=s;i<=e;i++){
        if(a[i]<pivot) countSmaller++;
    }
    int pivotIndex=countSmaller+s;
    swap(a[pivotIndex],a[e]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<pivotIndex && j>pivotIndex){
            swap(a[i++],a[j--]);
        }
    }
    return pivotIndex;
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