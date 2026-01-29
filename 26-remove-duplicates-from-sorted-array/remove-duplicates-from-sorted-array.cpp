class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,j=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[j-1])
            {
                nums[j]=nums[i];
                //   nums.erase(nums.begin()+i);
                j++;
            }
         
            //   k++;
        }
        return j;
    }
};