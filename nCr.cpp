// A Dynamic Programming based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 

const int p = 1e9+7;

int nCrModp(int, int);

// Driver program 
int main() 
{ 
  int t, n, r;
  cin >> t;
  
  while(t--){
      cin >> n >> r;
      cout << nCrModp(n, r) << endl;
  }
  
  return 0; 
}
// } Driver Code Ends


// Returns nCr % p 
// #include<b>
#define mod 1000000007
int nCrModp(int n, int r) 
{ 
  unsigned long int c[r+1]={0};
  c[0]=1;
        for(int i=1;i<=n;i++)
            for(int j=min(i,r);j>0;j--) c[j]+=c[j-1]%1000000007;
    return c[r]%1000000007;
} 
