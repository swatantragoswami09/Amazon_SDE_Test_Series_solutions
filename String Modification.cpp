#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
string rearrangeString(string str);
int main()
{
	int t;
	cin>>t;
	while(t--){
    string str;
	fflush(stdin);
	cin>>str;
	int oldLength=str.length();
	int chs[26];
	memset(chs,0,sizeof(chs));
	for(int i=0;i<str.length();i++)
	    chs[str[i]-'a']++;
    str=rearrangeString(str);
	int flag=1,ff=0;
	int chs2[26];
	memset(chs2,0,sizeof(chs2));
	for(int i=0;i<str.length();i++)
	    chs2[str[i]-'a']++;
    if(str.length()!=oldLength)
        cout<<"0\n";
    else{
        for(int i=0;i<26;i++)
            if(chs[i]!=chs2[i])
                ff=1;
    if(ff==1){
        cout<<"0\n";
    }
    else{
	if(str!="-1"){
	for(int i=0;i<str.length();i++)
	{
		if(i>0)
		if(str[i-1]==str[i])
			flag=0;
	}
	if(flag==1)
		cout<<"1\n";
	else
	cout<<"0\n";
	}
	else
		cout<<"0\n";
    }
    }
	}
    return 0;
}// } Driver Code Ends


/* The below function should return 
the transformed string */
string rearrangeString(string str)
{
   string op="";
   int hash[26];
   for(int i=0;i<26;i++)
   {
      hash[i]=0;
   }
   priority_queue <pair<int,char>> q;
   for(int i=0;i<str.length();i++)
   {
       hash[int(str[i])-97]++;
   }
   for(int i=0;i<26;i++)
   {
       if(hash[i]>0)
        q.push(make_pair(hash[i],char(i+97)));
   }
   
   pair <int,char> temp=make_pair(100,'@');
   
   for(int i=0;i<str.length();i++)
   {
       pair<int,char> p=q.top();
       q.pop();
       if( i>0 && temp.first>0)
        q.push(temp);
      
       op=op+p.second;
       temp.second=p.second;
       temp.first=p.first-1;

   }
   return op;
}
