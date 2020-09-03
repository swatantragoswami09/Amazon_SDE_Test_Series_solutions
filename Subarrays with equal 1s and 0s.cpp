#include <bits/stdc++.h>
using namespace std;

long long int countSubarrWithEqualZeroAndOne(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<< countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
// } Driver Code Ends
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
    for(int i=0;i<n;i++)
        arr[i]=(arr[i]==0)?-1:1;
    unordered_map<int,long> m;
    int pre_sum=0;
    long long int count=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==0)  
            count++;
        if(m.find(pre_sum-0)!=m.end())
            count+=m.find(pre_sum-0)->second;
        m[pre_sum]++;
    }return count;
}
