
#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int, int[]);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cout << longestSubsequence(n, a) << endl;
    }
}
// } Driver Code Ends



// Function to find longest subsequence
int longestSubsequence(int n, int a[]){
    
   long dp[n];
   for(int i=0;i<n;i++)
   {
       dp[i]=1;
   }
   long ma=1;
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<i;j++)
       {
           if(a[i]>a[j])
           {
               if(dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                    ma=max(ma,dp[i]);
                }
                
           }
       }
   }
   return ma;
    
}
