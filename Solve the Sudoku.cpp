#include <bits/stdc++.h>
using namespace std;

// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  

bool SolveSudoku(int grid[N][N]);

void printGrid(int grid[N][N]);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		
		if (SolveSudoku(grid) == true)  
            printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}// } Driver Code Ends
  


// bool isSafe(int grid[N][N],int row,int col,int num);
bool isSafe(int grid[N][N],int row,int col,int num);
bool findLoc(int grid[N][N],int &row,int &col);

bool SolveSudoku(int grid[N][N])
{
    int row,col;
    if(!findLoc(grid,row,col))
        return true;
    for(int n=1;n<=9;n++)
    {
        if(isSafe(grid,row,col,n))
        {
            grid[row][col]=n;
            if(SolveSudoku(grid))
            return true;
            
            grid[row][col]=0;
        }
    }
    return false;
}
bool findLoc(int grid[N][N],int &row,int &col)
{
    for(row=0;row<N;row++)
    {
        for(col=0;col<N;col++)
        {
            if(grid[row][col]==0) return true;
        }
    }
    return false;
}
bool Uinrow(int grid[N][N],int row,int num)
{
    for(int col=0;col<N;col++)
        if(grid[row][col]==num) return true;
    return false;
}
bool Uincol(int grid[N][N],int col,int num)
{
    for(int row=0;row<N;row++)
        if(grid[row][col]==num)
            return true;
    return false;
}
bool Uinbox(int grid[N][N],int boxsr,int boxsc,int num)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
            if(grid[row+boxsr][col+boxsc]==num)
                return true;
            
    }
    return false;
    
}
bool isSafe(int grid[N][N],int row,int col,int num)
{
    return !Uinrow(grid,row,num)&&!Uincol(grid,col,num)&&!Uinbox(grid,row-row%3,col-col%3,num)&&(grid[row][col]==0);
}
void printGrid (int grid[N][N]) 
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        // cout<<"\n";
    }
}
