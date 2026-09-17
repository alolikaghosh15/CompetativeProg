n = int(input("Enter number of students: "))

names = []

for i in range(n):
    name = input(f"Enter name {i + 1}: ")
    names.append(name)

search_name = input("Enter name to search: ")

# Case-sensitive search
if search_name in names:
    position = names.index(search_name) + 1
    print("Case-sensitive: Student found at position", position)
else:
    print("Case-sensitive: Student not found")

# Case-insensitive search
found = False

for i in range(n):
    if names[i].lower() == search_name.lower():
        print("Case-insensitive: Student found at position", i + 1)
        found = True
        break

if not found:
    print("Case-insensitive: Student not found")
