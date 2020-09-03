#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
   unordered_map<int,int> m;
   int pre_sum=0,res=0,sum=0;
   for(int i=0;i<n;i++)
   {
       pre_sum+=A[i];
       if(pre_sum==sum)   res=i+1;
       if(m.find(pre_sum)==m.end()) m.insert({pre_sum,i});
       if(m.find(pre_sum-sum)!=m.end())
        res=max(res,i-m[pre_sum-sum]);
   }
   return res;
}
