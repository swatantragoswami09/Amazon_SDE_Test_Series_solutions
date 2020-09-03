// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

int MissingNumber(vector<int>& a, int n) {
    
    int x1 = a[0];
    int x2 = 1;
    for (int i = 1; i < n-1; i++)
    x1 = x1 ^ a[i];
    for (int i = 2; i <= n ; i++)
    x2 = x2 ^ i;
    return (x1 ^ x2);
}
