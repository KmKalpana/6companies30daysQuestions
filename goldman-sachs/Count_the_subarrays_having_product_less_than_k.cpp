/* Count the subarrays having product less than k.
Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k.
Input : 
n = 4, k = 10
a[] = {1, 2, 3, 4}
Output : 
7
Explanation:
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& nums, int n, long long k) 
    {
   //sliding Window
    int count=0;
        int strt=0;
        int i=0;
        long long p=1;
        while(i<nums.size())
        {
          p*=nums[i];
            while(strt<=i && p>=k)
            {
                p=p/nums[strt];
                strt++;
            }
            if(p<k)
            {
                count+=i-strt+1;
            }
            i++;
        }
     return count; 
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}