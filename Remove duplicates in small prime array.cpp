#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicate(vector<int>& arr, int n);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        vector<int>result = removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}
// } Driver Code Ends


vector<int> removeDuplicate(vector<int>& arr, int n)
{
    int res_in=1;
    for(int i=1;i<n;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j]) break;
        }
        if(j==i) arr[res_in++]=arr[i];
    }
    arr.erase(arr.begin()+res_in,arr.end());
    return arr;
}


