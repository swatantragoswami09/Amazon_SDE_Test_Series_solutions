#include <stdio.h>
#include <iostream>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX
using namespace std;
long long minDist(long long arr[], long long n, long long x, long long y);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) cin >> a[i];
        long long x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}// } Driver Code Ends


/*Complete the function below*/
long long minDist(long long arr[], long long n, long long x, long long y) {
    long long min=100000;
    int prev=0;
    int index=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]==x) {
            
            
            if(prev==y){
                min=(i-index < min)? i-index : min;
            }
            
            index=i;
            prev=x;
            
            
        }else if(arr[i]==y){
            
            if(prev==x){
                min=(i-index < min)? i-index : min;
            }
            
            index=i;
            prev=y;
            
            
        }else{}
        
        
    }
    if(min==100000) return -1;
    return min;
}
