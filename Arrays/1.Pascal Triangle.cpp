#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});                     //  Adding first row
        for(int i=1;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);                  //  First and last values are 1
            for(int j=1;j<i;j++){
                temp.push_back(ans[i-1][j-1]+ans[i-1][j]);                  //    Previous Sums
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
int main(){
    int numRows;
    cin>>numRows;
    Solution obj;
    vector<vector<int>> ans=obj.generate(numRows);                  //    Calling  function
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
