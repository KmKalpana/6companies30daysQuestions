/*
Overlapping rectangles 
Given two rectangles, find if the given two rectangles overlap or not. A rectangle is denoted by providing the x and y coordinates of two points: the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping. (L1 and R1 are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).
Note: It may be assumed that the rectangles are parallel to the coordinate axis.
Input:
L1=(0,10)
R1=(10,0)
L2=(5,5)
R2=(15,0)
Output:
1
Explanation:
The rectangles overlap.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) 
    {
      if(L1[0]>R2[0] || L2[0]>R1[0])
      return 0;
      if(R1[1]>L2[1] || R2[1]>L1[1])
      return 0;
      return 1;
      
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
} 