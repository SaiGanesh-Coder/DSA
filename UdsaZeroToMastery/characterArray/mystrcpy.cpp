#include <iostream>
#include <cstring>
using namespace std;

void mystrcpy(char str1[],char str2[]){
    for(int i=0;i<=strlen(str2);i++){
        str1[i]=str2[i];
    }
}

int main(){
    char str1[10]="abcd";
    char str2[10]="defg";
    cout<<"Strings before coping"<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    mystrcpy(str1,str2);
    cout<<"Strings after coping"<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
}