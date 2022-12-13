#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the values of "<<endl;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    cout<<"Sum of the array elements is : "<<sum<<endl;
    return 0;
}