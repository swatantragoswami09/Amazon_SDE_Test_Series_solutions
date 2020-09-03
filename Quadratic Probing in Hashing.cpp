
void QuadraticProbing(int hash[],int hashSize,int arr[],int sizeOfArray);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    int hash[hashSize];
	    
	    
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    
	    for(int i=0;i<hashSize;i++)
	    hash[i]=-1;
	    
	    QuadraticProbing( hash, hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}// } Driver Code Ends

void QuadraticProbing(int hash[],int hashSize,int arr[],int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
    {
        int temp=arr[i]%hashSize;
        for(int j=0;hash[temp]!=-1;j++)
            temp=(arr[i]+j*j)%hashSize;
        hash[temp]=arr[i];
    }
}
