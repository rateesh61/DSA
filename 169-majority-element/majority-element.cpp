class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i: nums)
        {
            mp[i]++;
        }

        int mx=0,ele=-1;
        for(auto it:mp){
            if(it.second>mx)
            {
                mx=it.second;
                ele=it.first;
            }
        }
        return ele;        
    }
};