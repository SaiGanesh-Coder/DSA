#include<iostream>
using namespace std;

int stringLength(char Input[]){
    int count = 0;
    for(int i=0;Input[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseString(char Input[]){
     int s=0;
     int e=stringLength(Input) - 1;
     while(s<e){
       swap(Input[s],Input[e]);
       s++;e--;
  } 
}

int main(){
    char Input[100];
    cout<<"Enter the string :- ";
    cin.getline(Input,100);
    reverseString(Input);
     cout<<"Reverse of your string is :- "<<Input;
    return 0;
}