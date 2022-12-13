#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array :- ";            // Declaring Array Size
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the values "<<endl;
        cout<<"a["<<i<<"] = ";                      //Assigning Values to the elements
        cin>>a[i];
            }
    cout<<"Before Swapping The Array :- ";
    for(int i=0;i<n;i++){                           //Printing Array Before Swapping 
        cout<<a[i]<<"  ";
    }

    cout<<endl;

    int s=0;
    int e=n-1;
    while(s<e){                                      //Reversing Array
        swap(a[s],a[e]);
        s++; e--;
    }

    cout<<"After Swapping the Array :- ";            //Printing Array After Swapping 
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}
