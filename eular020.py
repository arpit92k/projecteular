t=int(raw_input())
while t:
        t-=1
        n=int(raw_input())
        f=1
        m=2
        while m<=n:
                f*=m
                m+=1
        ans=0
        while f :
                d=f%10
                f/=10
                ans+=d
        print ans