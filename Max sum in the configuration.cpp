#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/
// void rotate(int a[],int n)
// {
//     reverse(a,a+1);
//     reverse(a+1,a+n);
//     reverse(a,a+n);
// }
int max_sum(int A[],int n)
{
    int cur_sum=0;
    for(int i=0;i<n;i++)
        cur_sum+=A[i];
    int cur_val=0;
    for(int i=0;i<n;i++)
        cur_val+=i*A[i];
    int res=cur_val;
    for(int i=1;i<n;i++)
    {
        int n_v=cur_val-(cur_sum-A[i-1])+A[i-1]*(n-1);
        cur_val=n_v;
        res=max(res,n_v);
    }
    return res;
}
