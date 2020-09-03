//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 bool compare(const pair<int,int> &a, 
              const pair<int,int> &b) 
{   
  if(a.first==b.first)
    return (a.second < b.second); 
  return a.first<b.first;
} 

vector<vector<int>> kClosest(vector<vector<int>>& , int );

//User code will be pasted here

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> p, res;
        
        for(int i = 0 ; i < n ; ++ i ) {
            vector<int> vec(2);
            cin >> vec[0] >> vec[1];
            p.push_back(vec);
        }
        
        res = kClosest(p, k);
        
        for(int i = 0 ; i < k ; ++ i ) {
            cout << res[i][0] << " " << res[i][1] << " ";
        }
        
        cout << "\n";
        
    }
}// } Driver Code Ends

bool cmp(pair<int,pair<int,int>> &a,pair<int,pair<int,int>> &b)
{
    if(a.first!=b.first) return a.first<b.first;
    
    if(a.second.first!=b.second.first) return a.second.first<b.second.first;
    
    return a.second.second<b.second.second;
}


vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
{
       vector<pair<int,pair<int,int>>> v;
       for(int i=0;i<points.size();i++)
       {
           int dist=((points[i][0]*points[i][0]+points[i][1]*points[i][1]));
           v.push_back({dist,{points[i][0],points[i][1]}});
           
       }
       sort(v.begin(),v.end(),cmp);
       vector<vector<int>> ans;
       for(int i=0;i<k;i++)
       {
           vector<int> temp(2);
           temp[0]=v[i].second.first;
           temp[1]=v[i].second.second;
           ans.push_back(temp);
       }
       return ans;
}
