class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates,int i,vector<int>& comb, vector<vector<int>>& ans, int target){
        if(target<0  || i==candidates.size()) return;
        if(target==0){
            ans.push_back(comb);
            return;
        }

        comb.push_back(candidates[i]);
        solve(candidates,i,comb,ans,target-candidates[i]);     //single
      //  solve(candidates,i,comb,ans,target-candidates[i]);     //multiple
        comb.pop_back();
        solve(candidates,i+1,comb,ans,target);     //exclusion on the right side of the tree


    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        solve(candidates,0,comb,ans,target);
        return ans;
    }
};