#include<bits/stdc++.h>
int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
   int a[10000],j=0;
   int c=0,s=0;
   while(n>0)
   {
       if(n%10==0) a[j++]=5;
       else a[j++]=n%10;
       n=n/10;
       c++;
   }
   for(int i=0;i<c;i++)
   {
       s+=a[i]*pow(10,i);
       
   }
   return s;
}
