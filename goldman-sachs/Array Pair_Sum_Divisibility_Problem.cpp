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