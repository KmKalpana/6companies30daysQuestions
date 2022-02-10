//209. Minimum Size Subarray Sum
/*Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the 
sum is greater than or equal to target. If there is no such subarray, return 0 instead.
Example 1:
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
     // vector<int>dp(n+1);
        int count;
        int mini=INT_MAX;
        if(nums.size()==1 && nums[0]<target || nums.size()==0)
        {
            return 0;
        }
        if(nums[nums.size()-1]==target || nums[nums.size()-1]>target)
            return 1;
      for(int i=0; i<nums.size()-1; i++)
      {
          int sum=nums[i];
          count=1;
          if(sum==target || sum>target)
              return 1;
          
          for(int j=i+1; j<nums.size(); j++)
          {
              if(sum+nums[j]<target)
              {
                  sum+=nums[j];
                  count++;
              }
              else if(sum+nums[j]>=target)
              {
                  sum+=nums[j];
                count++;
                  break;
              }
          }
            if(count==nums.size() && sum<target)
         {
             return 0;
         }
          if(count<mini && sum>=target)
          {
              mini=count;
              count=0;
          }   
       
      }
        return mini;
    }
};
