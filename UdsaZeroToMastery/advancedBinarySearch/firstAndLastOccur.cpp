#include<bits/stdc++.h>
using namespace std;

/*int getFirst(vector<int> nums,int target){
    int s=0,e=nums.size()-1,ans=-1;
    while(s<=e){
        int mid = s+(e-s)/2;    //so that no integer overflow is there
        if(nums[mid]==target){
            ans=mid;
            e=mid-1;    // LHS For first pos
        }
        else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

int getLast(vector<int> nums,int target){
    int s=0,e=nums.size()-1,ans=-1;
    while(s<=e){
        int mid = s+(e-s)/2;    //so that no integer overflow is there
        if(nums[mid]==target){
            ans=mid;
            s=mid+1;    // RHS For Last pos
        }
        else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}*/

int getIndex(vector<int> nums,int target,bool getFirst){
    int s=0,e=nums.size()-1,ans=-1;
    while(s<=e){
        int mid = s+(e-s)/2;    //so that no integer overflow is there
        if(nums[mid]==target){
            ans=mid;
            if(getFirst) e=mid-1;    // LHS For first pos
            else s=mid+1;    // RHS For last pos
        }
        else if(nums[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums ,int target){
    vector<int> v(2,-1);
    int first = getIndex(nums,target,true);
    if(first==-1) return v;
    int last = getIndex(nums,target,false);
    v[0]=first;
    v[1]=last;
    return v;
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> ans;
    ans = searchRange(nums,target);
    cout<<"First Occ. = "<<ans[0]<<"\nLast Occ. = "<<ans[1]<<endl;
    return 0;
}