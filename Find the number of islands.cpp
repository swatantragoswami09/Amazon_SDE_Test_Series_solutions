#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
// int c=0;
void v(vector<int> A[],int n,int m,int i,int j)
{
    if(i<0 ||i>=n ||j<0 ||j>=m || A[i][j]==0) return ;
    A[i][j]=0;
    v(A,n,m,i-1,j);
    v(A,n,m,i+1,j);
    v(A,n,m,i,j-1);
    v(A,n,m,i,j+1);
    v(A,n,m,i+1,j+1);
    v(A,n,m,i-1,j-1);
    v(A,n,m,i-1,j+1);
    v(A,n,m,i+1,j-1);

}
int findIslands(vector<int> A[], int N, int M) {

   int c=0;
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<M;j++)
       {
           if(A[i][j]==1)
           {
               v(A,N,M,i,j);
               c++;
           }
           
       }
   }
    return c;
    
    
}
