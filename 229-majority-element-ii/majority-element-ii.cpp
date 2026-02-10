class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int n=nums.size();
     int mm=(n/3)+1;
     list<int> l;          
     unordered_map<int,int> mpp;
     for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]==mm) 
         l.push_back(nums[i]); 
     }
     return vector<int>(l.begin(), l.end());
    }
};