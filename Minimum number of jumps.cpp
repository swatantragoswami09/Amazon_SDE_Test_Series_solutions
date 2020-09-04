using namespace std;
int cal(int arr[],int n)
{
    int dp[1000000];dp[0]=0;
    for(int i=1;i<n;i++)
       dp[i]=INT_MAX;
    bool flag;
    for(int i=0;i<n;i++)
    {
        flag=false;
        while(arr[i]!=0)
        {
          if(dp[n-1]<=100)
            return dp[n-1];
          dp[i+arr[i]]=min(dp[i+arr[i]],dp[i]+1);
          arr[i]=arr[i]-1;
          flag=true;
        }
        if(!flag)
        {
            for(int k=i+1;k<n;k++)
              if(dp[k]<=100)
                flag=true;
        }
        if(!flag)
          return -1;
    }
}
int main()
{
  int t;cin>>t;
  while(t--)
  {
      int n;cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
        cin>>arr[i];
      int result=cal(arr,n);
      cout<<result<<endl;
  }
}
