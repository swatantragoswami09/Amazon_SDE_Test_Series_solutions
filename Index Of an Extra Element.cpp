#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}// } Driver Code Ends


/*Complete the function below*/
#include<bits/stdc++.h>
int findExtra(int a[], int b[], int n) {
    
    int in_extra=0;
    int k=0;
    
    int size_1 = *(&a + 1) - a;
    int size_2= *(&b + 1) - b;
    // cout<<size_1<<"\n";
    // cout<<size_2<<"\n";
    int max_size=max(size_1,size_2);
    
    for(int i=0;i<max_size;i++)
    {
        if(a[k]==b[k])
        {
            k++;continue;
        }
        else
        return k;
        
    }
    
}
