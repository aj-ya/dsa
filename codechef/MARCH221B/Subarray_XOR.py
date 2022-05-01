#PYPY
import os
import sys
from atexit import register
from io import BytesIO 
sys.stdin = BytesIO(os.read(0, os.fstat(0).st_size))
sys.stdout = BytesIO()
register(lambda: os.write(1, sys.stdout.getvalue()))
input = lambda: sys.stdin.readline().rstrip('\r\n')
t = int(input())
for _ in range(0,t):
    n = int(input())
    binary = input()
    a=[ 0 for k in range(0,n)]
    a[0] = 1 if (binary[0] == '1') else 0
    for i in range(1,n):
        a[i] = a[i - 1]
        if (binary[i] == '1'):
            a[i] += (i + 1)
        a[i-1]= 1 if(a[i-1]%2!=0) else 0
    a[n-1]=1 if(a[n-1]%2!=0) else 0
    sum=0
    for i in range(0,n):
        if(a[i]==1):
            sum=sum+(2**(n-i-1));
        sum=sum%998244353
    print(sum)