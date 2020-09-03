// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
int findPlatform(int arr[], int dep[], int n)
{sort(arr,arr+n);
sort(dep,dep+n);
int platneed = 0;
int result=0,i=1,j=0;
if(n==1)
return 1;
while(i<n&&j<n) { if(arr[i]<=dep[j]) { platneed++; i++; if (platneed> result)
result = platneed;
}
else
{
platneed--;
j++;
}
}
return result+1>0?result+1:0;
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
        int arr[n];
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
