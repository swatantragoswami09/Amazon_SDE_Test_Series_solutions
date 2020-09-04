#include <bits/stdc++.h>
using namespace std;

vector <string> generateCode(int );
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		vector <string> res = generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	// your code goes here
	return 0;
}

// } Driver Code Ends


/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
vector <string> generateCode(int N)
{
     int n=N;
     vector<string> arr;
    if (n <= 0)
        return arr;
 
    // 'arr' will store all generated codes
    
 
    // start with one-bit pattern
    arr.push_back("0");
    arr.push_back("1");
 
    // Every iteration of this loop generates 2*i codes from previously
    // generated i codes.
    int i, j;
    for (i = 2; i < (1<<n); i = i<<1)
    {
        // Enter the prviously generated codes again in arr[] in reverse
        // order. Nor arr[] has double number of codes.
        for (j = i-1 ; j >= 0 ; j--)
            arr.push_back(arr[j]);
 
        // append 0 to the first half
        for (j = 0 ; j < i ; j++)
            arr[j] = "0" + arr[j];
 
        // append 1 to the second half
        for (j = i ; j < 2*i ; j++)
            arr[j] = "1" + arr[j];
    }
 
    // print contents of arr[]
    return arr;
}
