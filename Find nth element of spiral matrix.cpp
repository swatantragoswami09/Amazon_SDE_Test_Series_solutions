#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}// } Driver Code Ends


/*You are required to complete this method*/
int findK(int A[MAX][MAX], int n, int m, int K)
{
    vector<int> res(MAX*MAX);
    int top=0,bottom=n-1,left=0,right=m-1;
    int k=0;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
            res[k++]=A[top][i];
        top++;
        for(int i=top;i<=bottom;i++)
            res[k++]=A[i][right];
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
                res[k++]=A[bottom][i];
            bottom--;
        }
        for(int i=bottom;i>=top;i--)
            res[k++]=A[i][left];
        left++;
    }
    return res[K-1];
}

