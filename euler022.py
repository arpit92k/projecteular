n=int(raw_input())
names=[]
for i in range(n):
    name=raw_input()
    names.append(name)
q=int(raw_input())
for i in range(q):
    name=raw_input()
    place=1
    for i in range(n):
        if names[i]<name:
            place+=1
    value=0
    for ch in name:
        value+=(ord(ch)-ord('A')+1)
    value*=place
    print value