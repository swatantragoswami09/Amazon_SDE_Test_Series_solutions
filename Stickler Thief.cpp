#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


 // } Driver Code Ends


// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll A[], ll n)
{
   ll t[n];
	    t[0]=A[0];
	    t[1]=A[0]>A[1]?A[0]:A[1];
	    for(int i = 2;i<n;i++)
	    {
	        int x = A[i]+t[i-2];
	        int y=t[i-1];
	        t[i]=max(x,y);
	    }
	    return t[n-1];
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;++i)
			cin>>a[i];
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
