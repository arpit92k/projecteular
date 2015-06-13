amicable=[220,284,1184,1210,2620,2924,5020,5564,6232,6368,10744,10856,12285, 14595,17296, 18416, 63020, 66928, 66992, 67095, 69615, 71145, 76084, 79750,87633,88730]
LIMIT=100001
i=0
ai=0
sum_amicable=[]
s=0
l=len(amicable)
while i<LIMIT:
    if ai<l and amicable[ai]<=i:
        s+=amicable[ai]
        ai+=1
    sum_amicable.append(s)
    i+=1
t=int(raw_input())
while t:
    t-=1
    n=int(raw_input())
    print sum_amicable[n]