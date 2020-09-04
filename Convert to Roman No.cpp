#include <bits/stdc++.h>
using namespace std;


string convertToRoman(int ) ;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	cout << convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}// } Driver Code Ends


/*you are required to complete 
this function*/

// n :given number that you are require to convert
string convertToRoman(int n) 
{
    string t[]={"","M","MM","MMM","MMMM"};
            string h[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM","M"};
            string te[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC","C"};
            string o[]={"","I","II","III","IV","V","VI","VII","VIII","IX","X"};
            string ans;
            ans=ans+t[n/1000];
                n=n%1000;
            ans=ans+h[n/100];
                n=n%100;
            ans=ans+te[n/10];
                n=n%10;
            ans=ans+o[n];
            return ans;
}
