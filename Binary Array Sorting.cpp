//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);


 // } Driver Code Ends


//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
vector<int> SortBinaryArray(vector<int> a)
{
    int n=a.size();
    int left=0,right=n-1;
	    while(left<right)
	    {
	        while(a[left]==0&&left<right)
	        {
	            left++;
	        }
	        while(a[right]==1&&left<right)
	        {
	            right--;
	        }
	        if(left<right)
	        {
	            a[left]=0;
	            a[right]=1;
	            left++;
	            right--;
	        }
	    }
	    return a;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	      
	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
