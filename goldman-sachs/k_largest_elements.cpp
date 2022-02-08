#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int>v;
        /*sort(arr,arr+n);
        int i=n-1;
        while(k-->0)
        {
          v.push_back(arr[i--]);
          
        }*/
        priority_queue<int>pq;
        for(int i=0; i<n; i++)
        {
            pq.push(arr[i]);
        }
        while(k-->0)
        {
            int temp=pq.top();
            v.push_back(temp);
            pq.pop();
        }
        return v;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}