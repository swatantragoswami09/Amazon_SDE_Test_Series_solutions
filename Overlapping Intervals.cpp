//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> , int );

// User code will be pasted here

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > arr,res;
        int n,x,y;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
        }
        
        res = overlappedInterval(arr,n);
        
        
        for(int i=0;i<res.size();i++)
            cout << res[i].first << " " << res[i].second << " " ;
            
        cout<<endl;
    }
}
// } Driver Code Ends


//User function template for C++
bool sortpair(pair<int, int> a, pair<int, int> b)
{
    return a.first<b.first;
}
vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> v, int N) {
    vector<pair<int,int>> s;
    int i=0;
    sort(v.begin(), v.end(), sortpair);
	    for(int j=0; j<N; j++)
	    {
	        if(i==0)
	        {
	            s.push_back(v[j]);
	            i++;
	            continue;
	        }
	        if(v[j].first <= s[i-1].second)
	        {
	            if(s[i-1].second<v[j].second)
	           {
	               s[i-1].second = v[j].second;
	           }
	        }
	        else
	        {
	            s.push_back(v[j]);
	            i++;
	        }
	    }
	    return s;
}
