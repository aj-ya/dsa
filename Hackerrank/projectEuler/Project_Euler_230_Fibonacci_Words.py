def fibDig(a,b,n):
    fiblen=[len(a),len(b)]
    if(n<=len(a)):
        return a[n-1]
    elif(n<=len(b)):
        return b[n-1]
    else:
        i=1
        while(n>fiblen[i]):
            i=i+1
            fiblen.append(fiblen[i-1]+fiblen[i-2])
        while(i>1):
            if(n<=fiblen[i-2]):
                i=i-2
            else:
                n=n-fiblen[i-2]
                i=i-1
        if(i==1):
            return b[n-1]
        else :
            return a[n-1]
t=int(input())
for i in range (0,t) :
    a,b,c=input().split(' ')
    n=int(c)
    print(fibDig(a,b,n))