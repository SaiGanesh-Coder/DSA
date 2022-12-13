#include<iostream>
using namespace std;

int main(){
    int n=4;
    int a[n]={1,2,3,4};
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<"  ";
    }
    return 0;
}