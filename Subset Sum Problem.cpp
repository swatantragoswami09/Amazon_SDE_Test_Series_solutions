#include<iostream>
#include<stdio.h>

bool SUBSET(int n, int sum, int A[])
{
    bool sub[n+1][sum+1];
    for(int i = 0;i<=n;i++)
    {
        sub[i][0]=true;
    }
    for(int j = 1;j<=sum;j++)
    {
        sub[0][j]=false;
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=sum;j++)
        {
            if(A[i-1]<=j)
            {
                sub[i][j]=sub[i-1][j-A[i-1]] || sub[i-1][j]; 
            }
            else
                sub[i][j]=sub[i-1][j];
        }
    }
    return sub[n][sum];
}

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n;
	    std::cin >> n;
	    int A[n];
	    int sum=0;
	    for(int i= 0;i<n;i++)
	    { 
	        std::cin >> A[i];
	        sum+=A[i];
	    }
	    if((float)sum/2-sum/2)
	        std::cout << "NO" <<"\n";
	    else
	    {
	        sum/=2;
	        bool y= SUBSET(n,sum,A) ;
	        if(y==true)
	            std::cout << "YES" <<"\n";
	        else
	           std:: cout << "NO" << "\n"; 
	    }
	    
	}
	return 0;
}
