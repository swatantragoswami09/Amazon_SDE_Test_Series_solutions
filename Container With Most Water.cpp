//Initial template for C++

#include<iostream>
using namespace std;
int maxArea(int A[], int len);

 // } Driver Code Ends


//User function template for C++
#include<limits.h>
long long maxArea(long long a[], int n)
{
    int j=n-1;
     int maxi=INT_MIN,sum;
     for(int i=0;i<n;i++){
         while(j>i){
             sum=(j-i)*min(a[j],a[i]);
             if(sum>maxi)
             maxi=sum;
             if(a[j]>=a[i]){
                 break;
             }
             j--;
         }
     }
     if(maxi!=INT_MIN) return maxi;
     else return 0;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends
