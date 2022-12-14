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
void BubbleSort(int S[],int n){
     for(int i=0;i<=n-1;i++){         
            int flag=0;  
        for(int j=0;j<=n-2-i;j++){      
            if(S[j]>S[j+1]){
                swap(S[j+1],S[j]);
                flag=1;
            }
        }
            if(flag==0) break;        //array is already sorted
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
    BubbleSort(S,n);
    cout<<"\nSorted Array : ";
    printArray(S,n);
    return 0;
}