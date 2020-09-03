#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {

    if(n==1) return 1;
    long long prefix_sum[n]={0};
    prefix_sum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=a[i]+prefix_sum[i-1];
    }
    for(int i=1;i<n;i++)
    {
        if(prefix_sum[i-1]==prefix_sum[n-1]-prefix_sum[i])
        return i+1;
    }
    return -1;
}
