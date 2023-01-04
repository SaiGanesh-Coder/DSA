#include<bits/stdc++.h>
using namespace std;

int length(char input[]){
    if(input[0]=='\0') return 0;
    return 1+length(input+1);
}

int main(){
    char input[]="abcd";
    cout<<length(input);
    return 0;
}