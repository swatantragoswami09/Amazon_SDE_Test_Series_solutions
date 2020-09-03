#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

void printMat(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	printMat(a,n,m);
    	cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/
void printMat(int M[MAX][MAX],int row,int col)
{
    for(int i=0;i<1;i++)
        {   for(int j=0;j<col;j++)
            {   cout<<M[i][j]<<" ";
            }cout<<"$";
        }
        int p;
        for(int i=1;i<row;i++)
        {   
            for(int j=0;j<i;j++)
            {   p=0;
                for(int k=0;k<col;k++)
                {   if(M[i][k]==M[j][k])
                     {   p++;}
                }if(p==col)
                    break;
            }
            if(p!=col)
            {   for(int j=0;j<col;j++)
                    cout<<M[i][j]<<" ";cout<<"$";
            }
        }
}
