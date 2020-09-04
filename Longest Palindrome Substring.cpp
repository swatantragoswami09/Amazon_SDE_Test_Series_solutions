// Initial template for C++

#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string);

// Your code will be pasted here

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << longestPalindrome(str) << endl;
    }
    return 0;
}// } Driver Code Ends
// User function template for C++

// A : given string
// return the required string
string longestPalindrome(string s) {
    int max=0;
    int n=s.length();
    int l,r;int x=0,y=0;
    for(int i=0;i<n-1;i++)
    {
        l=i;r=i+1;
        if(s[l]==s[r])
        {
            while(l>=0&&r<n)
            {
                if(s[l]==s[r])
                {
                    l--;r++;
                }
                else
                {
                    //l++;r--;
                    int z=0;
                    break;
                }
            }
            if(max<r-l+1)
            {
                x=l+1;y=r-1;
                max=r-l+1;
            }
        }
    }
    for(int i=1;i<n-1;i++)
    {
        l=i-1;r=i+1;
        if(s[l]==s[r])
        {
            while(l>=0&&r<n)
            {
                if(s[l]==s[r])
                {
                    l--;r++;
                }
                else
                {
                    //l++;r--;
                    int z=0;
                    break;
                }
            }
            if(max<r-l+1)
            {
                x=l+1;y=r-1;
                max=r-l+1;
            }
        }
    }
    string c;
    for(int i=x;i<=y;i++)
    c.push_back(s[i]);
    //cout<<c<<"\n";
    return c;
}
