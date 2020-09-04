#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


long long maximumAmount(int arr[], int n) 
{
    int dp[n][n];
	    for(int size=0; size<n; size++){
	        for(int i=0,j=size; j<n; i++,j++){
	           int a = (i+1<=j-1)?dp[i+1][j-1]:0;
	           int b = (i+2<=j)?dp[i+2][j]:0;
	           int c= (i<=j-2)?dp[i][j-2]:0;
	           
	           dp[i][j]=max(arr[i]+min(a,b),arr[j]+min(a,c));
	        }
	    }
	    return dp[0][n-1];
}

// { Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    
	    int A[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    
	    cout<<maximumAmount(A,N)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
