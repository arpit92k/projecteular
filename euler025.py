ans=[0,1]
a=1
b=1
l=1
t=2
while l<=5000 :
	while len(str(b))==l:
		x=a+b
		a=b
		b=x
		t+=1
	l+=1;
	ans.append(t)
t=int(raw_input())
while t:
	t-=1
	n=int(raw_input())
	print ans[n]

