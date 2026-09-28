class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0,cnt=0;
        unordered_map<int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            if(mpp.find(presum-k)!=mpp.end())  cnt+=mpp[presum-k];
            mpp[presum]+=1;
        }
        return cnt;
    }
};