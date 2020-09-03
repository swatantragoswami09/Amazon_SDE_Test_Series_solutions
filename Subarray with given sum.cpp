#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s){
    
     int flg=0, j=0, i=0;
    long sum=0;
    while(i<=n){
        if(sum<s)
            sum+=arr[i++];
        else if(sum>s)
            sum-=arr[j++];
        if(sum==s){
            flg=1;
            break;
        }
    }
    if(flg==1)
        cout<<j+1<<" "<<i; //remove ="">
    else
        cout<<-1;
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
