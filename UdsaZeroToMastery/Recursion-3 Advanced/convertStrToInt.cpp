#include<bits/stdc++.h>
using namespace std;

/*int convertToInt(string s,int n){
    if(n==0) return 0;
    int smallAns = convertToInt(s,n-1);
    int lastDigit = s[n-1] - '0';
    return smallAns*10 + lastDigit;
}

int main(){
    string s;
    cin>>s;
    int n = convertToInt(s,s.length());
    cout<<n;
}*/

int length(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int convertStringToInt(char str[],int n){
    if(n==0) return 0;
    int smallAns = convertStringToInt(str,n-1);
    int lastDigit = str[n-1] - '0';
    int finalAns = lastDigit + smallAns*10;
    return finalAns;
}

int main(){
    char str[] = "12345";
    int n = length(str);
    int integer = convertStringToInt(str,n);
    cout<<integer;
}