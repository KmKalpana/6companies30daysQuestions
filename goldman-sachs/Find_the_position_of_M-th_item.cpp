#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findPosition(int N , int M , int K) 
    {
        if( N==1)
        {
            return 1;
        }
        if(M<=N-K+1 )
        {
            return M+K-1;
        }
        else if(M>=N-K+1)
        {
            M-=N-K+1;
            return (M%N==0)?N:(M%N);
        }
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;