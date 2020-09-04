#include <bits/stdc++.h>
using namespace std;
int isValid(char *);
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}// } Driver Code Ends


/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
int isValid(char *ip) {
    vector<char*> v;
	int len = strlen(ip);

	int dots=0;
	for(int i=0; i<len; i++){
	    if(ip[i] == '.')
	    	dots++;
	}

	if(dots!=3){
	    return 0;
	}

    char *token=strtok(ip, ".");
    while(token){
    	v.push_back(token);
    	token = strtok(NULL, ".");

    }

    if (v.size()!=4)
    {
    	return 0;
    }

    for (auto it : v)
    {
    	int n=strlen(it);
    	if (n>3)
    	{
    		return 0;
    	}

    	for (int i = 0; i < n; i++)
    	{
    		if (!isdigit(it[i]))
    		{
    			return 0;
    		}
    	}

    	if (n==1 && it[0]=='0')
    	{
    		continue;
    	}
    	bool digitfound = false;
    	for (int i = 0; i < n; i++)
    	{
    		if (!digitfound && it[i] == '0')
    		{
    			return 0;
    		}
    		else
    			digitfound = true;
    	}

    	int val=0;
    	for (int i = 0; i < n; i++)
    	{
    		val = val*10 + (int)(it[i]-'0');
    	}

    	if (val<0 || val>255)
    	{
    		return 0;
    	}
    }

    return 1;
}
