#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
     int m=s.length();
     int n=x.length();
     string s2;
     int i,k=0,j,t;
     for(i=0;i<m;i++)
     {
         s2=s.substr(i,n);
         if(s2.compare(x)==0)
         {
             return i;
         }
     }
     return -1;
}
