/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *r=(int*)malloc(2*sizeof(int));
    
    *returnSize=0;
   for(int i=0;i<numsSize;i++)
   for(int j=i+1;j<numsSize;j++)
   {
     if((nums[i]+nums[j])==target)
     {
        *returnSize=2;
        r[0]=i;
        r[1]=j;
        return r;
     
     }
   }
   //return
   // null
   return NULL;
}
