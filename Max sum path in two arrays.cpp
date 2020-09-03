#include<bits/stdc++.h>
using namespace std;


 int max_path_sum(int [], int [], int , int );

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        int result = max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}

// } Driver Code Ends


/*You are required to complete this method*/
 int max_path_sum(int A[], int B[], int N, int M)
{
    int a = 0, b = 0;
    int i = 0, j = 0;
    int sum = 0;
    while (i < N && j < M) {
        int xa = A[i];
        int xb = B[j];
        if (xa == xb) {
            sum += xa + std::max(a, b);
            a = b = 0;
            i++; j++;
            continue;
        }
        
        if (xa < xb) {
            a += xa;
            i++;
        } else {
            b += xb;
            j++;
        }
    }
    
    while (i < N) a += A[i++];
    while (j < M) b += B[j++];
    
    return sum + std::max(a, b);
    
}
