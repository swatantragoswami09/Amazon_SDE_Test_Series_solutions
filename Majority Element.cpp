#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count>n/2)
        return arr[i];
    }
    return -1;
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
