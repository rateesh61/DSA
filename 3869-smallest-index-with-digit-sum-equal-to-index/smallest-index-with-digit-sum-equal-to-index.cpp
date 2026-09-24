class Solution {
public:

    int getSum(int digit){
        int sum=0;
        while(digit>0){
            int l=digit%10;
            sum+=l;
            digit/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(getSum(nums[i])==i)
                return i;
        }
    
         return -1;
    }
};