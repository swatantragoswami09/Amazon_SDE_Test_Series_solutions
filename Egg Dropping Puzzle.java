
import java.util.*;
import java.lang.*;
import java.io.*;

class GfG { 
    
	public static void main (String[] args) throws IOException  {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    String inputLine[] = br.readLine().trim().split(" ");
		    int n = Integer.parseInt(inputLine[0]);
		    int k = Integer.parseInt(inputLine[1]);
		    
		    System.out.println(EggDrop.eggDrop(n, k));
		}
	}
}


// } Driver Code Ends



class EggDrop 
{
    static int eggDrop(int n, int k) 
	{
	    int dp[][]= new int[k+1][n+1];
        for(int i=1;i<=n;i++)
            dp[1][i]=1;
        for(int i=1;i<=k;i++)
            dp[i][1]=i;
        for(int i=2;i<=k;i++)
            for(int j=2;j<=n;j++)
        {
                dp[i][j]=Integer.MAX_VALUE;
                for(int x=1;x<=i;x++)
                {
                    int eggBroken= dp[x-1][j-1];
                    int eggSurvived= dp[i-x][j];
                    int temp=Math.max(eggBroken,eggSurvived)+1;
                    if(temp<dp[i][j]) dp[i][j]=temp;
                } 
        
        } return dp[k][n]; 
	}
}
