

'''def quickSort(arr,low,high):
    if low < high:
 
        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr,low,high)
 
        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
'''
def quickSort(arr,first,last):
	if first<last:
		q=partition(arr,first,last)
		quickSort(arr,first,q-1)
		quickSort(arr,q+1,last)
	
		
def partition(arr,first,last):
    x=arr[last]
    i=first-1
    for j in range(first,last):
        if arr[j]<=x:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[last]=arr[last],arr[i+1]
    return i+1



#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        quickSort(arr,0,n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()

# } Driver Code Ends
