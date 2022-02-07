#include<iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>&st) 
    {
       unordered_map<string,vector<string> >mapping;
       vector<vector<string> >s;
       for(auto it: st)
       {
           string res=it;
           sort(it.begin(),it.end());
           mapping[it].push_back(res);
       }
       for(auto it: mapping)
       {
           s.push_back(it.second);
       }
     
      return s;
    }
};
// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}