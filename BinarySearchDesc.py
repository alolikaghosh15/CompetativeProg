arr=list(map(int,input().split()))
arr.sort(reverse=True)
target=int(input("Enter target:"))
left=0
right=len(arr)-1
result=-1
while left <= right:
    mid=(left+right)//2
    if arr[mid]==target:
        result=mid
        break
    elif arr[mid] < target:
        right=mid-1
    else:
        left=mid+1
print(result)
