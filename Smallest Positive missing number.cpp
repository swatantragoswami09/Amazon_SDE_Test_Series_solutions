#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int a[], int n) { 
    bool p[n+1]={false};
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]<=n) p[a[i]]=true;
    }
    int c=0,d=0;
    for(int i=1;i<=n;i++)
    {
        if(!p[i])
        {
            d=i;
            c=1;
            break;
        }
    }
    if(c==1) return d;
    else return n+1;
}

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
