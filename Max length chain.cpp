// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/
bool my_fun(val a,val b){
    if(a.second == b.second) return a.first<b.first;
    return a.second<b.second;
}
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,my_fun);
    int end = -1;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(p[i].first > end){
            end = p[i].second;
            cnt++;
        }
    }
    return cnt;
}
