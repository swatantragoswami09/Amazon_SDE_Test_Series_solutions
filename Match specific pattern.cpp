#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,
                      string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		cin>>s[i];
		
		string tt;
		cin>>tt;
		
		
		vector<string> res = findMatchedWords(s,tt);
  sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends
/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
int h[26];
void refresh()
{
    for(int i=0;i<26;i++)
        h[i]=-1;
}
vector<string> findMatchedWords(vector<string> dict,
                      string pattern)
{
     int n=dict.size();
     int z=0;
     vector<string> v;
     for(int i=0;i<n;i++)
    {
        z=0;
        refresh();
        int x=pattern.size();
        int y=dict[i].size();
        if(x==y)
        {
            for(int j=0,k=0;j<dict[i].size()&&pattern.size();j++,k++)
            {
                int p=pattern[k]-'a';
                if(h[p]==-1)
                    h[p]=dict[i][j];
                else 
                {
                    if(h[p]!=dict[i][j])
                    {
                        z=1;
                        break;
                    }
                }
            }
            if(z==0) v.push_back(dict[i]);
        }
    }return v;
}
