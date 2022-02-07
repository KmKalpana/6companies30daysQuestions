#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n)
    {
    int *p= new int[2];
    sort(arr,arr+n);
    int c=1;
    int i=0;
    while(i<n)
    {
        if(arr[i]==c)
         {
             c++;
         }
          if(arr[i]==arr[i+1] && i<n)
         {
             p[0]=arr[i];
         }
         i++;
    }
    p[1]=c;
    return p;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} 