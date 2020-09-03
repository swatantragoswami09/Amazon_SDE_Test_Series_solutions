while t>0:
    n,m=map(int,input().split())
    s1=set(list(map(int,input().split())))
    s2=set(list(map(int,input().split())))
    s3=s1.intersection(s2)
    if len(s3)!=0:
        print(len(s3))
    else:
        print(0)
    t-=1
