//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


 // } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
 void transpose(vector<vector<int> >& matrix)
 {
     for(int i=0;i<matrix[0].size();i++)
     {
         for(int j=i;j<matrix[0].size();j++)
         {
             swap(matrix[i][j],matrix[j][i]);
         }
     }
 }
void rotate(vector<vector<int> >& matrix)
{
    transpose(matrix);
    int first,last;
    for(int i=0;i<matrix[0].size();i++)
    {
        first=0;
        last=matrix[0].size()-1;
        while(first<last)
        {
           swap(matrix[first++][i],matrix[last--][i]);
           
        }
        
    }
    
    
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

  // } Driver Code Ends
