class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates,int start,vector<int>& comb, int target){
        if(target<0  || start==candidates.size()) return;
        if(target==0){
            ans.push_back(comb);
            return;
        }
        for(int i=start;i<candidates.size();i++)
        {
          comb.push_back(candidates[i]);
          solve(candidates,i,comb,target-candidates[i]);     //single
                       //  solve(candidates,i,comb,ans,target-candidates[i]);     //multiple
          comb.pop_back();
        }

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> comb;
        solve(candidates,0,comb,target);
        return ans;
    }
};