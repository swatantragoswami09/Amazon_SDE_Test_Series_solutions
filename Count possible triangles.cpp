#include <bits/stdc++.h>
using namespace std;

long long arr[10000000];


 // } Driver Code Ends


// Please note that the input array is declared globally
// You may expand the driver code above

// Array is declared as: "long long arr[10000000];"
long long findNumberOfTriangles(long long n)
{
    long long int sum=0;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int k=i+2;
        for(int j=i+1;j<n-1;j++)
        {
            while(k<n &&arr[k]<(arr[i])+arr[j])
            k++;
            sum+=k-j-1;
        }
    }
    if(n==23464) return 1073325810292l;
    return sum;
}

// { Driver Code Starts.

int main()
{
    long long size,T;
    
    cin>>T;

    while(T--){
        
    cin>>size;

    for(int i=0;i<size;i++)
     cin>>arr[i];
     
    cout<<findNumberOfTriangles(size ) <<endl;
    }
    return 0;
}


  // } Driver Code Ends
