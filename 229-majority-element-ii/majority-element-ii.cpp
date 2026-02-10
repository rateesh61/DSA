class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int n=nums.size();
    set<int> ans;
     for(int i=0;i<n;i++){
         int count=1;
        for(int j=i+1;j<n;j++){
        if(nums[i]==nums[j] && i!=j){
         count++;
         }
        }
        if((n/3)<count)
        ans.insert(nums[i]) ;  
     }
     return vector<int> (ans.begin(),ans.end());
    }
};