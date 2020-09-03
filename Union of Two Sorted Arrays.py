def mergeArrays(a,b,n,m):
    l=set(a).union(set(b))
    ll=sorted(list(l))
    print(*ll,end=' ')


#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n,m = map(int,input().strip().split())
        a = list(map(int,input().strip().split()))
        b = list(map(int,input().strip().split()))
        mergeArrays(a,b,n,m)
        print()
# } Driver Code Ends
