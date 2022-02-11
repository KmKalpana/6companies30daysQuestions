/*Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.
Input : arr = [9, 5, 7, 3], k = 6
Output: True
Explanation: {(9, 3), (5, 7)} is a 
possible solution. 9 + 3 = 12 is divisible
by 6 and 7 + 5 = 12 is also divisible by 6. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) 
    {
     if(nums.size()%2!=0)
     return false;
     unordered_map<int,int>mp;
     int n=nums.size();
     int count=0;
     for(int i=0; i<nums.size(); i++)
     {
       int current=nums[i] %k;
       int found=(k-current)%k;
       if(mp[found]>0)
       {
           count++;
           mp[found]--;
       }
       else
       mp[current]++;
     }
     
    if(count==nums.size()/2)
    return true;
    return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  
