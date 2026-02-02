class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(),arr.end());
        int sum=0,l=0,r=arr.size()-1;
        while(l<r)
        {
            sum=arr[l].first+arr[r].first;
            if(sum==target){
                return {arr[l].second,arr[r].second};
            }
            if(sum<target)
            l++;
            else
            r--;

        }

      return {}; // guaranteed solution exists, so this won't run
    }
};
