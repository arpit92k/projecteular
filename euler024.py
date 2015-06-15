import sys
fact=range(13)
fact[0]=1
for i in range(1,13):
    fact[i]=i*fact[i-1]
t=int(raw_input())
while t:
    chars=['a','b','c','d','e','f','g','h','i','j','k','l','m']
    t-=1
    n=int(raw_input())
    n-=1
    c=0
    for i in range(12):
        j=0
        while c+j*fact[12-i]<=n:
            j+=1
        if j:
            j-=1
        c+=j*fact[12-i]
        x=chars[0]
        chars[0]=chars[j]
        chars[j]=x
        sys.stdout.write(chars[0])
        del chars[0]
        chars.sort()
    print chars[0]