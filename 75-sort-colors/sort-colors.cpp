#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
         int l = nums.size();

         for(int i=0;i<l;i++)
         for(int j=0;j<l-1;j++)
         {
            if(nums[j]>nums[j+1])
            //swap(nums[j],nums[j+1]);
            swap(nums[j], nums[j + 1]);

         }      
    }
};