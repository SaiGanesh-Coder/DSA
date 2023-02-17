#include<bits/stdc++.h>
using namespace std;
//Moore Vooting Method
int majorityElement(vector<int>& A){
    int cnt=1,candidate=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]==candidate){
            cnt++;
        }else{
            cnt--;
            if(cnt==0){
            candidate = A[i];
            cnt=1;
        }
        }
    }
    //we can  not assume so we check
    int cnt2=0;
    for(int i=0;i<A.size();i++){
        if(candidate==A[i]) cnt2++;
    }
    if(cnt2>A.size()/2) return candidate;
    else return -1;
}

int main(){
    vector<int> A = {2,2,1,1,1,2,2};
    int Element = majorityElement(A);
    cout<<Element;
    return 0;
}