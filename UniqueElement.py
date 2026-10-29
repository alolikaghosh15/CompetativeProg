arr=list(map(int,input().split()))
result=0
for num in arr:
    result=result^num
print(result)