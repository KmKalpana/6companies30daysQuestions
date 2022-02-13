/*Given a string which is basically a sentence without spaces between words. However the first letter of every word is in uppercase. You need to print this sentence after following amendments:
(i) Put a single space between these words
(ii) Convert the uppercase letters to lowercase.
Note: The first character of the string can be both uppercase/lowercase.
Input:
s = "BruceWayneIsBatman"
Output: bruce wayne is batman
Explanation: The words in the string are
"Bruce", "Wayne", "Is", "Batman".*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string amendSentence (string s)
    {
         string p="", temp="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
            if(!temp.empty())
            {
            p+=temp;
            p+=" ";
            }
             temp="";
             temp+=97+(s[i]-65);
            }
            else 
            {
                temp+=s[i];
            }
        }
        p+=temp;
        return p;
    }
};
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  
