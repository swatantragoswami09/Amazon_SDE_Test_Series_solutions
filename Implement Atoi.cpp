 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int l = str.length();
    int sum=0,p=0;
    if(str[0]==45)
    {
        for(int i=l-1;i>=1;i--)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            sum=sum+(str[i]-48)*int(pow(10,p));
        }
        else
        {
            return -1;
        }
        p++;
    }
    return -1*sum;
    }
    else
    {for(int i=l-1;i>=0;i--)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            sum=sum+(str[i]-48)*int(pow(10,p));
        }
        else
        {
            return -1;
        }
        p++;
    }
    return sum;}
}
