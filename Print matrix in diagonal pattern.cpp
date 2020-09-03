#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
void printMatrixDiagonal(int mat[MAX][MAX], int );

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
       
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
      printMatrixDiagonal(a,n);
      cout<<endl;
        
       
    }
}// } Driver Code Ends


/*You are required to complete this method */
void printMatrixDiagonal(int mat[MAX][MAX], int n)
{
    int i=0,j=0;    
     bool isup=true;
     for(int k=0;k<n*n;)
     {
         if(isup)
         {
             while(i>=0&&j<n)
             {
                 cout<<mat[i][j]<<" ";
                 k++;
                 i--;
                 j++;
             }
             if(i<0&&j<=n-1){i=0;}
             else{i+=2;j=n-1;}
             
         }
         else
         {
             while(j>=0&&i<n)
             {
                 cout<<mat[i][j]<<" ";
                 i++;
                 j--;
                 k++;
             }
             if(j<0&&i<=n-1){j=0;}
             else{j+=2;i=n-1;}
             
         }
         isup=!isup;
         
     }
}
