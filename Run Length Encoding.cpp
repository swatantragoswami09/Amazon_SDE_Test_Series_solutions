#include <bits/stdc++.h>
using namespace std;

char *encode(char *src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

char *encode(char *src)
{     
  int i=0,j=0;
  int len=0;
  while(src[len]!='\0')
  len++;
  char *res=new char[2*len];
   char c=src[0];
  while(i < len)
  {
      int count=0;
      while(c==src[i++])
          count++;
         
      res[j++]=c;
      res[j++]=(count+'0');
      c=src[i-1];
      i=i-1;
  }
  res[j++]='\0';
  return res;
}     
 
