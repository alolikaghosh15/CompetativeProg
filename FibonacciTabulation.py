n=int(input("Enter n:"))
if n <= 1:
    print(n)
else:
    a=0
    b=1
    for i in range(2,n+1):
        c=a+b
        a=b
        b=c
    print(b)