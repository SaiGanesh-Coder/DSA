#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int m = matrix.size();    // No. of rows
    if(m==0) return ans;
    int n = matrix[0].size();      // No. of columns
    if(n==0) return ans;

    int sr=0,er=m-1,sc=0,ec=n-1;
    int count=0;

    while(sr<=er && sc<=ec){
        //print sr
        for(int i=sc;i<=ec;i++){
            ans.push_back(matrix[sr][i]);
            count++;
        }
        sr++;
        if(count==m*n) return ans;
        //print ec
        for(int i=sr;i<=er;i++){
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;
        if(count==m*n) return ans;
        //print er
        for(int i=ec;i>=sc;i--){
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;
        if(count==m*n) return ans;
        //print sc
        for(int i=er;i>=sr;i--){
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
        if(count==m*n) return ans;
    }
    return ans;
  }
    };

int main(){
    vector<vector <int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};   //2d vector
    Solution s;
    vector<int> ans;
    ans = s.spiralOrder(matrix);
	for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
}
}