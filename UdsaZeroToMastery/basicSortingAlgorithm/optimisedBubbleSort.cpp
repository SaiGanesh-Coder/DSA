#include<iostream>
using namespace std;

void takeInput(int S[],int n){
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>S[i];
    }
}
void printArray(int S[],int n){
    for(int i=0;i<=n-1;i++){
        cout<<S[i]<<"  ";
    }
}
void SelectionSort(int S[],int n){
     for(int i=0;i<=n-1;i++){           // NO NEED TO COMPARE THE LAST ELEMENT as after the last element there is nothing to compare after that..
        for(int j=0;j<=n-2-i;j++){        // START DIRECTLY FROM INDEX 1
            if(S[j]>S[j+1]){
                swap(S[j+1],S[j]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int S[n];
    takeInput(S,n);
    cout<<"UnSorted Array : ";
    printArray(S,n);
    SelectionSort(S,n);
    cout<<"\nSorted Array : ";
    printArray(S,n);
    return 0;
}