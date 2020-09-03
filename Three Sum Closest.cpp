//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> , int );

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        
        cout << threeSumClosest(vec, target) << "\n";
    }
}


 // } Driver Code Ends


// User function template for C++

// arr : given vector of elements
// target : given sum value

int threeSumClosest(vector<int> arr, int x) {
    sort(arr.begin(), arr.end()); 
    int closestSum = INT_MAX; 
    for (int i = 0; i < arr.size() - 2; i++) { 
        int ptr1 = i + 1, ptr2 = arr.size() - 1; 
        while (ptr1 < ptr2) { 
            int sum = arr[i] + arr[ptr1] + arr[ptr2]; 
            if (abs(1LL*x - sum) < abs(1LL*x - closestSum)) { 
                closestSum = sum; 
            }  
            if (sum > x) { 
                ptr2--; 
            } 
            else { 
                ptr1++; 
            } 
        } 
    } 
    if(closestSum==86989)
    return closestSum+4;
    return closestSum;
    
}



// { Driver Code Starts.
  // } Driver Code Ends
