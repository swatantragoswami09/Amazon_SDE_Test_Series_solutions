const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
int i;
int c1[26]={0};
int c2[26]={0};

int l1,l2;
l1=str1.length();
l2=str2.length();

int count=0;
for(i=0;i<l1;i++)
{
    c1[str1[i]-97]++;
    
}


for(i=0;i<l2;i++)
{
    c2[str2[i]-97]++;
    
}
for(i=0;i<26;i++)
{
    if(c1[i]!=c2[i])
    count+=abs(c1[i]-c2[i]);
}

return count;

}
