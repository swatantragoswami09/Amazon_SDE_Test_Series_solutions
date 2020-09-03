
from collections import Counter
def duplicates(arr, n):
    # arr.sort()
    d=Counter(arr)
    l=[]
    for k,v in d.items():
        if(v>1):
            l.append(k)
    if len(l)==0:
        l.append(-1)
    return sorted(l)



#{ 
#  Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends
