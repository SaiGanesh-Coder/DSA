#include<bits/stdc++.h>
using namespace std;

int rSizeFunction(int dSize){
    int i=0;
    while(!(pow(2,i)>=dSize+i+1)){
        i++;
    }
    return i;
}

int* setRindex(int totalBitsSize){
    int *hCode = new int[totalBitsSize];
    int p;
    for(int i=0;i<=totalBitsSize;i++){
        p=pow(2,i);
        if(totalBitsSize>p-1){
        hCode[p-1]=-1;
        }
    }
    return hCode;
}

void setDBits(int *hCode,int dBits[],int totalBitsSize){
    int count=0;
    for(int i=totalBitsSize-1;i>=0;i--){
        if(hCode[i]==-1) continue;
        hCode[i]=dBits[count];
        count++;
    }
}

void reverseArray(int *hCode,int totalBitsSize){
    int s=0,e=totalBitsSize-1;
        while(s<e){
            swap(hCode[s],hCode[e]);
            s++;e--;
        }
}

int* BCD(int totalBitsSize,int r){
    int *BCD=new int[totalBitsSize];
    int compare=0,set=0,temp=r;

        for(int i=0;i<=totalBitsSize;i++){
          while(compare<r){
            if(compare>totalBitsSize) break;
            BCD[compare]=set;
            compare+=1;
          }
          if(compare>totalBitsSize) break;
          r+=temp;
          set==0?set=1:set=0;
        }
    return BCD;
}

int* XORArray(int *BCD,int totalBitsSize,int rSize){
    int *XorArray=new int[totalBitsSize/2-1];
    int count=0;
    for(int i=totalBitsSize;i>=0;i--){
        if(BCD[i]==1){
            XorArray[count]=i;
            count++;
        }
        if(count>rSize) break;
    }
    return XorArray;
}

int* XORValues(int *hCode,int *XorArray,int totalBitsSize,int rSize){
    if(rSize<4) totalBitsSize+=2; 
    int *XorValue=new int[totalBitsSize/2];
    int count1=0;
    for(int i=0;i<=totalBitsSize;i++){
        if(hCode[i]==-1) continue;
        else{
            XorValue[count1]=hCode[XorArray[count1]-1];
            if(count1==totalBitsSize/2-1) break;
            count1++;
        }
        }
        return XorValue;
}

int XOR(int *XorValue,int totalBitsSize,int rSize,int Flag){
    if(rSize<4 && Flag==1) totalBitsSize+=1; 
    int xor_r1=0;
    for(int i=0;i<totalBitsSize/2;i++){
        xor_r1^=XorValue[i];
        }
      return xor_r1;
}

void setRBits(int *hCode,int xorValues[],int totalBitsSize){
    int count=0;
        for(int i=0;i<totalBitsSize;i++){
            if(hCode[i]==-1){
                if(count==4) break;
                hCode[i]=xorValues[count];
                count++;
            }
        }
}

void printHammingCode(int *hCode,int totalBitsSize){
    cout<<"Hamming code is : ";
    for(int i=0;i<totalBitsSize;i++) cout<<hCode[i]<<"  ";
    cout<<"\n";
}
int main(){
    string d;
    cout<<"Enter the dataBits  : "<<endl;
    cin>>d;
    int dSize=d.size();
    int dBits[dSize-1];
    cout<<"dataBits size : "<<dSize<<endl;;
    for(int i=0;i<dSize;i++){          // seperation each and every single bit
        dBits[i]=d[i] - '0';
    }

    int rSize = rSizeFunction(dSize);
    int rBits[rSize-1];
    cout<<"redundantBits size : "<<rSize<<endl;

    int totalBitsSize = dSize+rSize;
    cout<<"hCode will be of size : "<<totalBitsSize<<endl;

    int *hCode=setRindex(totalBitsSize);

    setDBits(hCode,dBits,totalBitsSize);

    cout<<"redundantBits : ";
    int *BCD_r1 = BCD(totalBitsSize,1);
    int *r1XorArray = XORArray(BCD_r1,totalBitsSize,rSize);
    int *r1XorValue = XORValues(hCode,r1XorArray,totalBitsSize,rSize);
    int xor_r1 = XOR(r1XorValue,totalBitsSize,rSize,0);
    cout<<xor_r1;

    int *BCD_r2 = BCD(totalBitsSize,2);
    int *r2XorArray = XORArray(BCD_r2,totalBitsSize,rSize);
    int *r2XorValue = XORValues(hCode,r2XorArray,totalBitsSize,rSize);
    int xor_r2 = XOR(r2XorValue,totalBitsSize,rSize,0);
    cout<<xor_r2;

    int *BCD_r4 = BCD(totalBitsSize,4);
    int *r4XorArray = XORArray(BCD_r4,totalBitsSize,rSize);
    int *r4XorValue = XORValues(hCode,r4XorArray,totalBitsSize-2,rSize);
    int xor_r4 = XOR(r4XorValue,totalBitsSize-4,rSize,1);
    cout<<xor_r4;
    

    int xor_r8;
    if(rSize>3){
    int *BCD_r8 = BCD(totalBitsSize,8);
    int *r8XorArray = XORArray(BCD_r8,totalBitsSize,rSize);
    int *r8XorValue = XORValues(hCode,r8XorArray,totalBitsSize-2,rSize);
    xor_r8 = XOR(r8XorValue,totalBitsSize-4,rSize,0);
    cout<<xor_r8;
    }
    cout<<"\n";

    reverseArray(hCode,totalBitsSize);

    if(rSize<4){
        int xorValues[3]={xor_r4,xor_r2,xor_r1};
        setRBits(hCode,xorValues,totalBitsSize);
        printHammingCode(hCode,totalBitsSize);
    }else{
        int xorValues[4]={xor_r8,xor_r4,xor_r2,xor_r1};
        setRBits(hCode,xorValues,totalBitsSize);
        printHammingCode(hCode,totalBitsSize);
    }
    return 0;
}