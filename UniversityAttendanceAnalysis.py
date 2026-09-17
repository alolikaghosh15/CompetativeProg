n = int(input("Enter number of students: "))

attendance = list(map(float, input("Enter attendance percentages: ").split()))

threshold = float(input("Enter attendance threshold: "))

# 1. Count below threshold
count = sum(1 for x in attendance if x < threshold)

# 2. Lowest attendance and position
lowest = min(attendance)
position = attendance.index(lowest) + 1

# 3. Average attendance
average = sum(attendance) / n

print("Students below threshold:", count)
print("Lowest attendance:", lowest)
print("Position:", position)
print("Average attendance:", average)
