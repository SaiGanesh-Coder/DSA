#include<iostream>
using namespace std;

int main(){
    char input[10];
    cout<<"Enter :- ";
    cin.getline(input,10,'o');
    cout<<"You Entered :- "<<input<<endl;
    return 0;
}