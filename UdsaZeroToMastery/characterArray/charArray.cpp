#include<iostream>
using namespace std;

int main(){
    char Name[100];
    cout<<"Enter the name :- ";
    cin>>Name;
   // Name[1] = '\0';     // Inserting a Null Value
    Name[3] = 'd';      // Replacing Null Character wiht d
    Name[4] = 'x';
    cout<<"The name is "<<Name;
    return 0;
}