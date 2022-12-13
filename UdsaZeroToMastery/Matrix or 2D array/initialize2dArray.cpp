#include<iostream>
using namespace std;

void printArray(int arr[][5],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"arr["<<i<<"]["<<j<<"] : "<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][5] = {{3,4},{6,7}};
    printArray(arr,2,5);
    return 0;
}