n = int(input("Enter number of hours: "))

patients = list(map(int, input("Enter patient counts: ").split()))

maximum = max(patients)
minimum = min(patients)

max_hour = patients.index(maximum) + 1

average = sum(patients) / n

above_average = sum(1 for x in patients if x > average)

print("Maximum patients:", maximum)
print("Hour of maximum:", max_hour)
print("Minimum patients:", minimum)
print("Peak hour:", max_hour)
print("Hours above average:", above_average)
print("Average patients:", average)
