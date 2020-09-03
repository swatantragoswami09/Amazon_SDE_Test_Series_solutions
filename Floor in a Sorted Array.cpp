#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find floor of x
// n: size of vector
// x: element whose floor is to find
int findFloor(vector<long long> v, long long n, long long x){
    
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=x) c++;
        else return c-1;
        
    }
    if(c!=0) return c-1;
    else 
    return -1;
    
}

// { Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    
	    cout << findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  // } Driver Code Ends
