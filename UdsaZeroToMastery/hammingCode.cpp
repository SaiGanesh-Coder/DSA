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

    int p;
    for(int i=0;i<=hSize;i++){
        p=pow(2,i);
        if(hSize>p-1){
        hCode[p-1]=-1;
        }
    }
    cout<<"\n";
    int count=0;
    for(int i=hSize-1;i>=0;i--){
        if(hCode[i]==-1) continue;
        hCode[i]=kBits[count];
        count++;
    }

    int s=0,e=hSize;
    for(int i=0;i<=hSize-1;i++){
        int temp[hSize];
        temp[s]=hCode[e];
        s++;
        e--;
    }

    cout<<"Hcode is : ";
    for(int i=0;i<=hSize-1;i++) cout<<hCode[i]<<"  ";
    cout<<"\n";

    int r1[hSize];

    for(int i=0;i<=hSize;i++){
          if(i%2==0){
            r1[i]=0;
          }else{
            r1[i]=1;
          }
    }
    for(int i=0;i<=hSize;i++) cout<<r1[i]<<" ";
    cout<<"\n";

    int r1XorArray[hSize/2-1];
    count=0;
    for(int i=hSize;i>=0;i--){
        if(i==1) continue;
        if(r1[i]==1){
            r1XorArray[count]=i;
            count++;
        }
    }
    for(int i=0;i<hSize/2;i++) cout<<r1XorArray[i]<<" ";
    cout<<"\n";

    int r1XorValue[hSize/2-1];
    int count1=0;
    for(int i=0;i<=hSize;i++){
        if(hCode[i]==-1) continue;
        else{
            r1XorValue[count1]=hCode[r1XorArray[count1]-1];
            if(count1==hSize/2-1) break;
            count1++;
        }
        }

        cout<<"r1XorValue = ";
        for(int i=0;i<=hSize/2-1;i++) cout<<r1XorValue[i]<<" ";
        cout<<"\n";
        int xor_r1=0;
        for(int i=0;i<hSize/2-1;i++){
            xor_r1^=r1XorValue[i];
        }
        cout<<xor_r1;
    }
