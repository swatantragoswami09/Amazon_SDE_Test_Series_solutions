#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find circular subarray with maximum sum
// arr: input array
// num: size of array
int normalMaxSum(int arr[],int n)
{
    int res=arr[0];
    int maxEnd=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnd=max(arr[i],maxEnd+arr[i]);
        res=max(res,maxEnd);
    }
    return res;
}
int circularSubarraySum(int arr[], int n){
    int max_normal=normalMaxSum(arr,n);
    if(max_normal<0) return max_normal;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+normalMaxSum(arr,n);
    return max(max_normal,max_circular);
    
    
}

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	    
	    
	    cout << circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
