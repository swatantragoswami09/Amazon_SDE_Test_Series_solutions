#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n);

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << maxLen(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
int maxLen(int arr[], int n)
{
    int* A = new int[n]();
  int* B = new int[n]();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
   {
       if (arr[i] == 1)
         A[i] = 1;
       else 
         A[i] = -1;
   }
   for (int i = 1; i < n; i++)
   {
        A[i] += A[i-1];
   }
   for (int i = 0; i < n; i++)
   {
       B[i] = i;
   }
   for (int i = 0; i < n; i++)
   {
       if (mp.find(A[i]) == mp.end())
       {
           mp[A[i]] = B[i];
       }
   }
   
   int largest = 0;
   int l = 0;
   int u = 0;
   for (int i = 0; i < n; i++)
   {
       if ((B[i] - mp.find(A[i]) -> second) > largest)
       {
           largest = B[i] - mp.find(A[i]) -> second;
           l = mp.find(A[i]) -> second;
           u = B[i];
       }
       //cout << mp.find(A[i])->second << " "; 
   }
   /*int flag = 0;
   for (int i = 0; i < n; i++)
   {
       if (mp.find(A[i]-1) != mp.end())
       {
       if ((B[i] - mp.find(A[i] - 1) -> second) > largest && arr[mp.find(A[i] - 1) -> second] == arr[B[i]])
       {
           flag = 1;
           largest = B[i] - mp.find(A[i] - 1) -> second;
           l = mp.find(A[i] - 1) -> second;
           u = B[i];
       }
       }
       //cout << mp.find(A[i])->second << " "; 
   }
   if (flag == 1)
   return (largest + 1);*/
   int hold = 0;
   /*for (auto it = mp.begin(); it != mp.end(); it++)
     {
      cout << it -> first << " ";     
      if (it -> first == 0)
      {
        hold = it -> second + 1; 
      }
     }
    cout << endl;*/
   for (int i = 0; i < n; i++)
     if (A[i] == 0)
       hold = i + 1;
   /*for (int i = 0; i < n; i++)
   cout << A[i] << " ";
   cout << endl;
   cout << "l = " << l << "; u = " << u << endl;
   if (l-1 >= 0)
     if (arr[l] != arr[l-1])
     return (largest + 2);
   if (u + 1 <= n - 1)
     if (arr[l] != arr[u+1])
     return (largest + 2);*/
   return max(hold, largest);
}
