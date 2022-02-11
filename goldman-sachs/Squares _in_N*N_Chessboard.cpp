/*Find total number of Squares in a N*N cheesboard.
Input:
N = 1
Output:
1
Explanation:
A 1*1 chessboard has only 1 square.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long squaresInChessBoard(long long n) 
    {
      return (n*(n+1)*(2*n+1))/6;    
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  
