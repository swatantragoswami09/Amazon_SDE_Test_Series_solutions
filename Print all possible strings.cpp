#include<bits/stdc++.h>
using namespace std;

void  printSpace(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        printSpace(str);
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/
void  printSpace(char str[])
{
     string s(&str[0]);
    std::vector<string> v;
    v.push_back({s[0]});

    for (int i = 1; i < s.size(); ++i)
    {
        vector<string> t;
        for (int j = 0; j < v.size(); ++j)
        {
            string c {str[i]};

            t.push_back(v[j] + c);
            t.push_back(v[j] + " " + c);
        }
        v = t;
    }
    
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] <<"$";
}
