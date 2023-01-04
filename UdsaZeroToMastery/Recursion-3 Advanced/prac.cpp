#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> setZereos(vector<vector <int>> &matrix){
        vector<int> ans;
        int m=matrix.size();
        if(m==0) return ans;
        int n=matrix[0].size();
        if(n==0) return ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
        }
};


int main(){
        vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
        Solution s;
        vector<int> ans;
        ans = s.setZereos(matrix);
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}