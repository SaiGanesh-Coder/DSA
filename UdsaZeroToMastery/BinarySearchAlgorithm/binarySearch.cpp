#include<bits/stdc++.h>
using namespace std;

void takeInput(int a[],int n){
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
}
void printArray(int a[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
int binarySearch(int a[],int n,int key){
        int s=0,e=n-1,mid;
        while(s<=e){
            mid=(s+e)/2;
            if(a[mid]==key){
                return mid;
            }
            else if(a[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n],key;
    cout<<"Enter the array elements : "<<endl;  
    takeInput(a,n);
    sort(a,a+n);
    cout<<"Sorted array is : ";
    printArray(a,n);
    cout<<"Enter the key : ";
    cin>>key;
    int index = binarySearch(a,n,key);
    if(index == -1){
        cout<<"Key not found"<<endl;
    }else{
        cout<<"Key is present at Index : "<<index<<endl;
    }
    return 0;
}