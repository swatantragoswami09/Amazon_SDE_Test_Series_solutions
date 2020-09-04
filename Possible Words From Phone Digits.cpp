#include <bits/stdc++.h>
#include <string>

using namespace std;

void possibleWords(int a[],int n);


int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	  possibleWords(a,N);
	   cout << endl;
	}
	
	return 0;
}// } Driver Code Ends


//Complete this function
void pos(string str[],vector<string> &v,string cur,int a[],int n,int ind)
{
    if(cur.length()==n)
    {
        v.push_back(cur);
        return ;
    }
    string pad=str[a[ind]];
    for(int i=0;i<pad.length();i++)
    {
        pos(str,v,cur+pad[i],a,n,ind+1);
    }
}
void possibleWords(int a[],int N)
{
    vector<string> v;
    string str[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    pos(str,v,"",a,N,0);
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
}
