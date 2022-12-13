#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter rows : ";
    cin>>m;
    cout<<"Enter cols : ";
    cin>>n;
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter value for arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<"Values for 2d arrays are : "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"arr["<<i<<"]["<<j<<"] : "<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
    return 0;
}