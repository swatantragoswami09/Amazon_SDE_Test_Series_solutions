#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

int lcs(int, int, string, string);

int main()
{
    int t,n,k,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        
        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( int m, int n, string X, string Y )
{
int L[m + 1][n + 1];
int i, j;

/* Following steps build L[m+1][n+1] in
bottom up fashion. Note that L[i][j]
contains length of LCS of X[0..i-1]
and Y[0..j-1] */
for (i = 0; i <= m; i++)
{
for (j = 0; j <= n; j++)
{
if (i == 0 || j == 0)
L[i][j] = 0;

else if (X[i - 1] == Y[j - 1])
L[i][j] = L[i - 1][j - 1] + 1;

else
L[i][j] = max(L[i - 1][j], L[i][j - 1]);
}
}

/* L[m][n] contains length of LCS
for X[0..n-1] and Y[0..m-1] */
return L[m][n];
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
return (a > b)? a : b;
}
