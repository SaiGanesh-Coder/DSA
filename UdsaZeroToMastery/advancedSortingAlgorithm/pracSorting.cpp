#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
        int pivot = a[e];
        int countSmaller = 0;
        for(int i=s;i<e;i++){
            if(a[i]<=pivot) countSmaller++;
        }
        int pivotIndex=countSmaller+s;
        swap(a[pivotIndex],a[e]);
        int i=s,j=e;
        while(i<pivotIndex && j>pivotIndex){
            while(a[i]<=a[pivotIndex]) i++;
            while(a[j]>a[pivotIndex]) j--;
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
    int a[5] = {5,3,6,2,1};
    quickSort(a,0,4);
    for(int i=0;i<=4;i++) cout<<a[i]<<" ";
    return 0;
}