//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);


 // } Driver Code Ends
//User function Template for C++

// s is the given string
int SubsequenceLength (string s) 
{
    int n=s.length(),res=0;
    vector<int> prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i=max(i,prev[s[j]]+1);
        int maxEnd=j-i+1;
        res=max(res,maxEnd);
        prev[s[j]]=j;
    }
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
