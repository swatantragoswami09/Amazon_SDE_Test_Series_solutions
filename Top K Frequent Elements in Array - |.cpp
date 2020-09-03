//Initial Template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> TopK(vector<int>& array, int k) ;


 // } Driver Code Ends


bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second==p2.second)
        return p1.first>p2.first;
    return p1.second>p2.second;
}

vector<int> TopK(vector<int>& a, int k) 
{
    unordered_map<int,int> map;
    vector<pair<int,int>> v;
    vector<int> ans;
    for(int i=0;i<a.size();i++)
    {
        map[a[i]]++;
    }
    for(auto i=map.begin();i!=map.end();i++)
    {
        v.push_back(make_pair(i->first,i->second));
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<k;i++)
    {
        ans.push_back(v[i].first);
    }
    return ans;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        vector <int> array(n);

        for(int i=0; i<n; i++)
            cin>>array[i];
        cin>>k;

        vector<int> result = TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends
