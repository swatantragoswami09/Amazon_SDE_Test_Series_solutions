
#Complete this function
from collections import Counter
def printfrequency(A,N):
    d=Counter(A)
    for i in range(1,N+1):
        if i not in d.keys():
            d[i]=0
    l=d.values()
    # l.sort()
    print(*l,end='')
    




#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math


def main():
    
    T=int(input())
    
    while(T>0):
        
        
        N=int(input())
        
        A=[int(x) for x in input().strip().split()]
        printfrequency(A,N)
        
        print()
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends
