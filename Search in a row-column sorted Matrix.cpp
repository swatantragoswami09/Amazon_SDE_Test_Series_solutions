#include <bits/stdc++.h>
using namespace std;
#define SIZE 801

int search( int n,int m, int x, int[SIZE][SIZE]);

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,m,x,i,j;
    cin>>n>>m;
    
    int mat[SIZE][SIZE];
    
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          mat[i][j] = 0;
        cin>>mat[i][j];
      }
    }
    
    cin>>x;
    cout << search(n,m,x, mat) << endl;
  
  }
  return 0;
}
// } Driver Code Ends
/*  Function to search x in the input matrix
*   n, m: rows and columns of matrix
*   x: element to check presence in matrix
*   mat[][]: input matrix
*/
int search( int n,int m, int x, int mat[SIZE][SIZE])
{
    int c=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
            if(mat[i][j]==x) 
            {
                c++;
                break;
            }
   }
   if(c==0) return c;
   else return 1;
}
