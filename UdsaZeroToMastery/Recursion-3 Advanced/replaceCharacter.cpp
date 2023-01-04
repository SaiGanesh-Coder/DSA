#include<bits/stdc++.h>
using namespace std;

void replaceCharacter(char input[]){
    if(input[0]=='\0') return;
    if(input[0]=='a') input[0]='x';
    replaceCharacter(input+1);
}

int main(){
    char input[]="abcdab";
    cout<<input<<"\n";
    replaceCharacter(input);
    cout<<input;
    return 0;
}