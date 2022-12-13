#include<iostream>
using namespace std;

int Length(char Input[]){
    int count = 0;
    for(int i=0;Input[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char Name[100];
    cout<<"Enter your Name :- ";
    cin>>Name;
    cout<<"The Length of string is "<<Length(Name)<<endl;
    return 0;
}