/*

Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its
right side. The rightmost element is always a leader. 
Example 1:
Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.*/
#include <bits/stdc++.h>
using namespace std;
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int>leader;
        int i=n-2;
         int last=a[n-1];
      leader.push_back(last);
      while(i>=0)
      {
       if(a[i]>=a[i+1])  
       {
          leader.push_back(a[i]);
       }
       else if(a[i]<a[i+1])
       {
           int temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
       }
       i--;
      }
     
      reverse(leader.begin(),leader.end());
      return leader;
    }
};
int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
