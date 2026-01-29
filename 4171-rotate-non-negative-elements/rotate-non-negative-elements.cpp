class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> temp;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            temp.push_back(nums[i]);
        }
        int n=temp.size(),idx=0;
        if(temp.size() < 2) return nums;
        k%=n;

        // reverse(temp.begin(),temp.end());
        reverse(temp.begin(),temp.begin()+k);
        reverse(temp.begin()+k,temp.end());
        reverse(temp.begin(),temp.end());
        

        for(auto& it : temp) cout << it << endl;
    
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
            nums[i]=temp[idx];
            idx++;
            }
          
        }
        return nums;
    }
};