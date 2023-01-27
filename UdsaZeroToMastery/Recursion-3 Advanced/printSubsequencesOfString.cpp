#include<bits/stdc++.h>
using namespace std;

void print_subs(string input,string output){
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    print_subs(input.substr(1),output);    //EXCLUDE
    print_subs(input.substr(1),output + input[0]);    //INCLUDE
}

void print_subs(char input[],char output[],int i){
    if(input[0] == '\0'){
        output[i]='\0';
        cout<<output<<endl;
        return;
    }
    print_subs(input +1,output,i);    //EXCLUDE
    output[i] = input[0];
    print_subs(input +1,output ,i+1);    //INCLUDE
}

int main(){
    //string input;
    char cInput[100];
    //cin>>input;
    cin>>cInput;
    //string output = "";
    char cOutput[100];
    //print_subs(input,output);
    print_subs(cInput,cOutput,0);
    return 0;
}