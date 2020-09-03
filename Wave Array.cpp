

 // } Driver Code Ends
// Function to convert given array to wave like array
// arr: input array
// n: size of array
void convertToWave(int *a, int n){
    
    for(int i=1;i<n;i+=2)
        {
            int temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends
