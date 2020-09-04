#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


void kLargest(int arr[], int n, int k){
   priority_queue<int > pq;
   for(int i=0;i<n;i++)
    pq.push(arr[i]);
    
    // for(int i=k+1;i<n;i++)
    // {    pq.pop();
    //     pq.push(arr[i]);
    // }
    // pq.pop();
    while(k-->0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
}

// { Driver Code Starts.
void kLargest(int arr[], int n, int k);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        
        kLargest(arr, n, k);
        
    }
    return 0;
}  // } Driver Code Ends
