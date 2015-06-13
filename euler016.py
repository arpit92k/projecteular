t=int(raw_input())
while t :
    t-=1
    n=int(raw_input())
    n=2**n
    ans=0
    while n :
        d=n%10
        ans+=d
        n/=10
    print ans