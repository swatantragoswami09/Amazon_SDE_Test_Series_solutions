while t>0:
    n=int(input())
    l=list(map(int,input().split()))
    lp=[]
    ln=[]
    for i in l:
        if i>0 :
            lp.append(i)
        else:
            ln.append(i)
    lp.sort()
    ln.sort(reverse=True)
    i=0
    j=0
    res=[]
    while(i<len(lp) and j<len(ln) ):
        if lp[i]==abs(ln[j]):
            res.append(lp[i])
            i+=1
            res.append(ln[j])
            j+=1
        else:
            i+=1
    if len(res)!=0:
        print(*res)
    else:
        print(0)
    t-=1
