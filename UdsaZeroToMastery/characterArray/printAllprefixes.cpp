#include<iostream>
#include<cstring>
using namespace std;

int main(){
    /*char str[10] = "abcde";
    for(int e=0;e<strlen(str);e++){
        for(int s=0;s<=e;s++){
            cout<<str[s];
        }
        cout<<endl;
    }*/
    char str[10] = "abcde";
    for(int e=strlen(str)-1;e>=0;e--){
        for(int s=strlen(str)-1;s>=e;s--){
            cout<<str[s];
        }
        cout<<endl;
    }
}