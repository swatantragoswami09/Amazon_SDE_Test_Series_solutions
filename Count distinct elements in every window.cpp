#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends



vector <int> countDistinct (int A[], int n, int k)
{
     unordered_map<int,int>s;
     vector<int> v;
    int x=0;
    for(int i=0;i<k;i++){
        auto it=s.find(A[i]);
        if(it==s.end()){
        x++;
        s.insert({A[i],1});
    }
    else
    s[A[i]]++;
    }
    cout<<x<<" ";
    for(int i=k;i<n;i++){
        if(s[A[i-k]]==1)
        x--;
        s[A[i-k]]--;
        if(s.find(A[i])==s.end()){
            x++;
            s.insert({A[i],1});
        }
        else if(s.find(A[i])!=s.end() && s[A[i]]==0){
        s[A[i]]++;
        x++;}
        else
        s[A[i]]++;
        v.push_back(x);
        }
        return v;
}
