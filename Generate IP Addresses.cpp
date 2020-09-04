#include <bits/stdc++.h>

using namespace std;

vector<string> genIp(string &s);

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        vector<string> str = genIp(s);
        sort(str.begin(), str.end());
        for (auto &u : str) {
            cout << u << "\n";
        }
    }
}// } Driver Code Ends


/*You are required to complete this method*/
bool ok(int a,int b,int c,int d)
{
        return a<=255 and b<=255 and c<=255 and d<=255;
}
string gen(int a,int b,int c,int d)
{
    return to_string(a)+"."+to_string(b)+"."+to_string(c)+"."+to_string(d);
}
vector<string> genIp(string &s) {
    
    vector<string> res;
        /*here we generate and try all possible ways*/
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                for(int k=1;k<=3;k++)
                {
                    for(int l=1;l<=3;l++)
                    {
                        if(i+j+k+l==s.length())
                        {
                            int a = stoi(s.substr(0,i));
                            int b = stoi(s.substr(i,j));
                            int c = stoi(s.substr(i+j,k));
                            int d = stoi(s.substr(i+j+k,l));

                            /* checks if its valid ip or not*/
                            if(ok(a,b,c,d))
                            {
                                string str =gen(a,b,c,d);
                                /*+3 to track three  3 dots*/
                                if(str.length()==s.length()+3)
                                {
                                    res.push_back(str);
                                }
                            }
                        }
                    }
                }
            }
        }
        return res;
}
