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
        for(int i=0;i<=hSize/2-1;i++){
            xor_r1^=r1XorValue[i];
        }
        cout<<xor_r1<<"\n";
      
    int r2[hSize],compare=0,temp=2,set=0;

    for(int i=0;i<=hSize;i++){
          while(compare<temp){
            if(compare>hSize) break;
            r2[compare]=set;
            compare+=1;
          }
          if(compare>hSize) break;
          temp+=2;
          set==0?set=1:set=0;
    }
    for(int i=0;i<=hSize;i++) cout<<r2[i]<<" ";
    cout<<"\n";

    int r2XorArray[hSize/2-1];
    count=0;
    for(int i=hSize;i>=0;i--){
        if(i==1) continue;
        if(r2[i]==1){
            r2XorArray[count]=i;
            count++;
        }
    }
    for(int i=0;i<hSize/2;i++) cout<<r2XorArray[i]<<" ";
    cout<<"\n";

    int r2XorValue[hSize/2-1];
    count1=0;
    for(int i=0;i<=hSize;i++){
        if(hCode[i]==-1) continue;
        else{
            r2XorValue[count1]=hCode[r2XorArray[count1]-1];
            if(count1==hSize/2-1) break;
            count1++;
        }
        }

        cout<<"r2XorValue = ";
        for(int i=0;i<hSize/2;i++) cout<<r2XorValue[i]<<" ";
        cout<<"\n";
        int xor_r2=0;
        for(int i=0;i<hSize/2;i++){
            xor_r2^=r2XorValue[i];
        }
        cout<<xor_r2<<endl;

    int r4[hSize];
    compare=0;temp=4;set=0;

    for(int i=0;i<=hSize/2-1;i++){
          while(compare<temp){
            if(compare>hSize+4) break;
            r4[compare]=set;
            compare+=1;
          }
          if(compare>hSize+4) break;
          temp+=4;
          set==0?set=1:set=0;
    }
    for(int i=0;i<=hSize;i++) cout<<r4[i]<<" ";
    cout<<"\n";

    int r4XorArray[hSize/2-1];
    count=0;
    for(int i=hSize;i>=0;i--){
 
        if(r4[i]==1){
            r4XorArray[count]=i;
            count++;
        }
    }
    for(int i=0;i<hSize/2-1;i++) cout<<r4XorArray[i]<<" ";
    cout<<"\n";
        
        int r4XorValue[hSize/2-2];
    count1=0;
    for(int i=0;i<=hSize;i++){
        if(hCode[i]==-1) continue;
        else{
            r4XorValue[count1]=hCode[r4XorArray[count1]-1];
            if(count1==hSize/2) break;
            count1++;
        }
        }

        cout<<"r4XorValue = ";
        for(int i=0;i<hSize/2-2;i++) cout<<r4XorValue[i]<<" ";
        cout<<"\n";
        int xor_r4=0;
        for(int i=0;i<hSize/2-2;i++){
            xor_r4^=r4XorValue[i];
        }
        cout<<xor_r4<<endl;


        int r8[hSize];
        compare=0;temp=8;set=0;

        for(int i=0;i<=hSize/2-1;i++){
          while(compare<temp){
            if(compare>hSize+4) break;
            r8[compare]=set;
            compare+=1;
          }
          if(compare>hSize) break;
          temp+=8;
          set==0?set=1:set=0;
     }
          for(int i=0;i<hSize;i++) cout<<r8[i]<<" ";
          cout<<"\n";

    int r8XorArray[hSize/2-1];
    count=0;
    for(int i=hSize;i>=0;i--){
 
        if(r8[i]==1){
            r8XorArray[count]=i;
            count++;
        }
    }
    for(int i=0;i<hSize/2-1;i++) cout<<r8XorArray[i]<<" ";
    cout<<"\n";
        
        int r8XorValue[hSize/2-2];
    count1=0;
    for(int i=0;i<=hSize;i++){
        if(hCode[i]==-1) continue;
        else{
            r8XorValue[count1]=hCode[r8XorArray[count1]-1];
            if(count1==hSize/2) break;
            count1++;
        }
        }

        cout<<"r8XorValue = ";
        for(int i=0;i<hSize/2-2;i++) cout<<r8XorValue[i]<<" ";
        cout<<"\n";
        int xor_r8=0;
        for(int i=0;i<hSize/2-2;i++){
            xor_r8^=r8XorValue[i];
        }
        cout<<xor_r8<<endl;

        int xorValues[4]={xor_r8,xor_r4,xor_r2,xor_r1};
        for(int i=0;i<4;i++) cout<<xorValues[i]<<" ";
        cout<<"\n";
        count=0;
        for(int i=0;i<hSize;i++){
            if(hCode[i]==-1){
                if(count==4) break;
                hCode[i]=xorValues[count];
                count++;
            }
        }

        for(int i=0;i<hSize;i++) cout<<hCode[i]<<" ";
        cout<<"\n";

        s=0,e=hSize-1;
        while(s<e){
            swap(hCode[s],hCode[e]);
            s++;e--;
        }
        cout<<"Hamming Code : ";
        for(int i=0;i<hSize;i++) cout<<hCode[i]<<" ";
        cout<<"\n";
        return 0;
    }
