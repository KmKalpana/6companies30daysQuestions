/*Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
Note: You are not allowed to use inbuilt function.
Example 1:
Input:
str = 123
Output: 123*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    /*You are required to complete this method */
    int atoi(string str) 
    {
       int digit=0;
       int i=0;
       if(str[0]=='-')
       {
           i=1;
       }
       while(i<str.length())
       {
                int a=str[i]-48;
          if(str[i]<48 || str[i]>57)
           {
               return -1;
           }
          else 
           {
               digit=digit*10+a;
               i++;
           }
        
       }
       if(str[0]=='-')
         return -digit;
         return digit;
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
} 
