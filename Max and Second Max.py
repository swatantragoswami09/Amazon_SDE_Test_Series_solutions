#Driver Code Starts
#Initial Template for Python 3


 # } Driver Code Ends

#User function Template for python3

# Function to find largest and second largest element in the array
def largestAndSecondLargest(sizeOfArray, arr):
    max1 = -1
    max2 = -1
    l=[0]*sizeOfArray
    l=list(set(arr))
    l.sort()
    # print(l)
    print (l[len(l)-1],end=' ' )
    l.pop(len(l)-1)
    if len(l):
        print(l[len(l)-1])
    else:
        print(-1)


#{ 
#Driver Code Starts.

# Driver Code
def main():
    
    # testcase input
    testcases = int(input())
    
    # looping through all testcases
    while testcases > 0:
        
        sizeOfArray = int(input())
        
        arr = [int(x) for x in input().split()]
        
        largestAndSecondLargest(sizeOfArray, arr)
        
        testcases -= 1

if __name__ == '__main__':
    main()
#} Driver Code Ends
