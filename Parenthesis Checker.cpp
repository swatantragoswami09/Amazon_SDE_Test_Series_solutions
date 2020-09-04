#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return if the paranthesis are balanced or not

bool ispar(string x)
{
    stack<char>s;
    for(int i=0;i<x.length();i++){
        if(!s.empty())
        {
            char m=s.top();
            if((x[i]=='}'&&m!='{')||(x[i]==']'&&m!='[')||(x[i]==')'&&m!='('))
           return false;
            if((m=='{' && x[i]=='}')||(m=='[' && x[i]==']')||(m=='(' && x[i]==')'))
            s.pop();
            else
            s.push(x[i]);
        }
        else
        s.push(x[i]);
    }
    if(s.empty())
    return true;
    else
    return false;
}

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
