a=int(input("Enter a:"))
b=int(input("Enter b:"))
print("Before swapping")
print("a=",a," b=",b)
a=a^b
b=a^b
a=a^b
print("After swapping")
print("a=",a," b=",b)