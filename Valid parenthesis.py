s=input("Enter parentheses:")
stack=[]
valid=True
for ch in s:
    if ch == '(':
        stack.append(ch)
    else:
        if not stack:
            valid=False
            break
        stack.pop()
if stack:
    valid=False
print(valid)