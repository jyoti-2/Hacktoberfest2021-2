/*
Input: s = "babad"
Output: "bab"
*/

#include <bits/stdc++.h>
using namespace std;

    string longestPalindrome(string s) {
        int n = s.size();
        string res = " ";
        int reslen = 0;
        
        for(int i=0; i<n; i++)
        {
            // only odd len palindromic substring
            int low = i; 
            int high = i;
            
            while(low >=0 && high <n && s[low] == s[high])
            {
                if((high-low+1) > reslen)
                {
                    res = s.substr(low, high-low+1); 
                    reslen = high-low+1;
                }
                low--;
                high++;
            }
            
            // only even len palindromic substring
            low = i; 
            high = i+1;
            
            while(low >=0 && high <n && s[low] == s[high])
            {
                if((high-low+1) > reslen)
                {
                    res = s.substr(low, high-low+1);
                    reslen = high-low+1;
                }
                low--;
                high++;
            }
            
        }
        return res;
    }
int main()
{
  string str = "babad";
  string res = longestPalindrome(str);
  cout << res ;
  return 0;
}
