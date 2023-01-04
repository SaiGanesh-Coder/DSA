#include<bits/stdc++.h>
using namespace std;

void print(char input[]){
        if(input[0]=='\0') return;
        cout<<input[0];
        print(input+1);
}

void revPrint(char input[]){
    if(input[0]=='\0') return;
    revPrint(input+1);
    cout<<input[0];
}

int main(){
    char input[] = "abc";
    print(input);
    cout<<"\n";
    revPrint(input);
    return 0;
}