#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2, int n, int m) {

    if (m == 0) return true;
    if (n == 0) return false;

    if (v1[n - 1] == v2[m - 1]) return isSubSequence(v1, v2, n - 1, m - 1);

    return isSubSequence(v1, v2, n - 1, m);
}

vector<int> find3Numbers(vector<int>, int);

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        auto res = find3Numbers(a, n);

        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and
                   isSubSequence(a, res, n, res.size())) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}// } Driver Code Ends


/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
vector<int> find3Numbers(vector<int> arr, int n) {
    int maxm=n-1,minm=0,i;
    int small[n],great[n];
    small[0]=-1;
    for(i=1;i<n;i++)
    {
        if(arr[i]<=arr[minm])
        {
            minm=i;
            small[i]=-1;
        }
        else
        {
            small[i]=minm;
        }
    }
    great[n-1]=-1;
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>=arr[maxm])
        {
            maxm=i;
            great[i]=-1;
        }
        else great[i]=maxm;
    }
    vector<int>ans;
    for(i=0;i<n;i++)
    {
        if(small[i]!=-1&&great[i]!=-1)
        {
           ans.push_back(arr[small[i]]); 
           ans.push_back(arr[i]); 
           ans.push_back(arr[great[i]]); 
           break;
        }
    }
    return ans;
}
