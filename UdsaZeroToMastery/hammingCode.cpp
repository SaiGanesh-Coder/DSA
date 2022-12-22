#include <bits/stdc++.h>
using namespace std;

int main(){
    string k;
    cout<<"Enter the K value  : "<<endl;
    cin>>k;
    int kSize=k.size();
    int kBits[kSize-1];
    cout<<"kBits are : "<<kSize<<endl;;
    for(int i=0;i<kSize;i++){          // seperation each and every single bit
        kBits[i]=k[i] - '0';
    }
    //cout<<k[0]+5;
    //cout<<k[1]+5;
    //cout<<k[2]+5;
    //cout<<k[3]+5;
    
    int rSize;
    for(int i=0;i<kSize;i++){
        if(pow(2,i)>=kSize+i+1){
            rSize=i;
            break;
        }
    }
    int rBits[rSize-1];
    cout<<"rBits will be : "<<rSize<<endl;
    int hSize = kSize+rSize;
    cout<<"hCode will be of size : "<<hSize<<endl;
    int hCode[hSize-1];

    for(int i=0;i<hSize;i=pow(2,i)){
        hCode[i-1]=-1;
    }
    int count=0;
    for(int i=0;i<hSize;i++){
        if(hCode[i]==-1) continue;
        hCode[i]=kBits[count];
        count++;
    }
    cout<<"Hcode is : ";
    for(int i=hSize-1;i>=0;i--) cout<<hCode[i]<<"    ";

}