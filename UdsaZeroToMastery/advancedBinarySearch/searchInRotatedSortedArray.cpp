#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& a,int key){
    int s=0,e=a.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==key) return mid;
        if(a[s]<=a[mid]){
            if(key>=a[s] && key<=a[mid]) e=mid-1;
            else s=mid+1;
        }
        else if(a[mid]<=e){
            if(key>=a[mid] && key<=a[e]) s=mid+1;
            else e=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> a = {4,5,6,7,0,1,2};
    int index = search(a,0);
    cout<<index;
    return 0;
}