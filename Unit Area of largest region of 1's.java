// Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class Driverclass {
    static int SIZE = 100;
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            int g[][] = new int[SIZE][SIZE];
            boolean vis[][] = new boolean[SIZE][SIZE];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) g[i][j] = sc.nextInt();
            }

            System.out.println(new Area().findAreaUtil(n, m, g, vis));
        }
    }
}// } Driver Code Ends


// User function Template for Java

/*
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   g[][]: 2D matrix from input
*   vis[][]: visited array
*/
class Area {
    static int count=0;
    static int findAreaUtil(int n, int m, int list[][], boolean vis[][]) 
    {
        int max=0,i,j;
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++)
	        {
	            if(list[i][j]==1&&!vis[i][j])
	            {
	                dfs(list,i,j,vis,n,m);
	                if(max<count)
	                max=count;
	                count=0;
	            }
	        }
	    }
	    return max;
    }
    static void dfs(int[][] list,int i,int j,boolean[][] vis,int n,int m)
    {
	    int row[]={-1,-1,-1,0,0,1,1,1};
	    int col[]={-1,0,1,-1,1,-1,0,1};
	    count++;
	    vis[i][j]=true;
	    for(int k=0;k<8;k++)
	    {
	        if(isSafe(list,i+row[k],j+col[k],vis,n,m))
	        dfs(list,i+row[k],j+col[k],vis,n,m);
	    }
	}
	static boolean isSafe(int[][] list,int r,int c,boolean[][] vis,int n,int m)
	{
	    return (r>=0&&r<n&&c>=0&&c<m&&list[r][c]==1&&!vis[r][c]);
	}
}
