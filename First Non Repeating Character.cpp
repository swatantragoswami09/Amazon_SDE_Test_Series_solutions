//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

string find(string s);

//Your code will be place here

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int x;
	    cin >> x;
	    string s;
	    cin >> s;
	    int h[26];
	    
	    cout << find(s) << "\n";
	    
	}
	
	return 0;
}// } Driver Code Ends


//User function template for C++

// return the first non-repeating char in S.
// if there's no non-repeating char, return "-1"

string find(string s) {
        int c=0,f=0,i;
        string an;
        string re;
        map<char, int> m;
	    re =s;
	    sort(re.begin(), re.end());
	    m[re[0]] = 1;
	    c++;
	    for(i=1; i<re.size(); i++)
	    {
	        
	        if(re[i-1]==re[i])
	        {
	            c++;
	            if(i==re.size()-1)
	           {
	             m[re[i]] = c;
	           }
	            continue;
	        }
	        
	        
	        m[re[i-1]] = c;
	        m[re[i]] =1;
	        c=1;
	    }
	    f=0;
	    for(i=0; i<s.size(); i++)
	    {
	        if(m[s[i]]==1)
	        {
	            an = s[i];
	            f=1;
	            break;
	        }
	        
	    }
	    if(f==0)
	    {
	        return "-1";
	        
	    }
	    else
	    {return an ;}
}
