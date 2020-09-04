// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int maxHeight(int height[],int width[],int length[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	

 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}
 
} // } Driver Code Ends


/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
int max(int x, int y){
    return x > y ? x : y;
}
int min(int x, int y){
    return x < y ? x : y;
}
typedef struct box{
    int d, w, h;
} box;
int compare(const void* a, const void* b){
    return ( (*(box *)b).d * (*(box *)b).w ) -
           ( (*(box *)a).d * (*(box *)a).w );
}
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    for(int i = 0; i < n; i++){
        if(width[i] >= length[i]) swap(width[i], length[i]);
    }
    box bb[n * 3]; int idx = 0;
    for(int i = 0; i < n; i++){
        bb[idx].h = height[i]; 
        bb[idx].w = width[i]; 
        bb[idx].d = length[i];
        idx++;
        bb[idx].h = width[i];
        bb[idx].d = max(height[i], length[i]);
        bb[idx].w = min(height[i], length[i]);
        
        idx++;
        bb[idx].h = length[i];
        bb[idx].d = max(height[i], width[i]);
        bb[idx].w = min(height[i], width[i]);
        idx++;
    }    
    n *= 3;
    qsort(bb, n, sizeof(bb[0]), compare);
    int msh[n];
    for(int i = 0; i < n; i++) msh[i] = bb[i].h;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(bb[i].w < bb[j].w && bb[i].d < bb[j].d 
                && msh[i] < msh[j] + bb[i].h){
                    msh[i] = msh[j] + bb[i].h;
                }
        }
    }
    int rs = -1;
    for(int i = 0; i < n; i++){
        rs = max(rs, msh[i]);
    }
    return rs;
    
}
