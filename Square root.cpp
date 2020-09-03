#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);
  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    long long int i;
for(i=1;i*i<=x;i++);
return i-1;
    
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
