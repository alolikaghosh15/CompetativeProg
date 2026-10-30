arr=list(map(int,input().split()))
target=int(input("Enter target:"))
seen={}
for i in range(len(arr)):
    complement=target-arr[i]
    if complement in seen:
        print(seen[complement],i)
        break
    seen[arr[i]]=i
else:
    print(-1)