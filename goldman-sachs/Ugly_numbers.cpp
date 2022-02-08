#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   vector<long long int>v(n+1);
	   v[0]=1;
	   long long int b2=0,b3=0,b5=0;
	   for(int i=1; i<n; i++)
	   {
	     long long  int a2=2*v[b2];
	     long long  int a3=3*v[b3];
	     long long int a5=5*v[b5];
	      long long int m=min({a2,a3,a5});
	      v[i]=m;
	      if(v[i]==a2)
	      b2++;
	       if(v[i]==a3)
	      b3++;
	       if(v[i]==a5)
	      b5++;
	   }
	   return v[n-1];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}