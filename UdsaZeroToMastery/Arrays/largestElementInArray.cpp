#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"Largest element in array is : "<<largest<<endl;
    return 0;
}