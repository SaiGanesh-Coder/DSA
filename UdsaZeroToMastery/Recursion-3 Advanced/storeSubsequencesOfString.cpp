#include<bits/stdc++.h>
using namespace std;

void store_subs(string input,string output,vector<string> &v){
    if(input.length()==0){
        v.push_back(output);
        return;
    }
    store_subs(input.substr(1),output,v);
    store_subs(input.substr(1),output+input[0],v);
}

int main(){
    string input;
    cin>>input;
    string output = "";
    vector<string> v;
    store_subs(input,output,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}