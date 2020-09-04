#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string A, string B, string C);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends
/*You are required to complete this method */
bool isInterleave(string A, string B, string C) 
{
    if ((A.length() == 0 && B.length() == 0 && C.length() == 0))
        return true;
    if (C.length() == 0)
        return false;
    
    return ((C[0] == A[0]) && isInterleave(A.substr(1),B,C.substr(1))
            || (C[0] == B[0]) && isInterleave(A,B.substr(1),C.substr(1)));
}
