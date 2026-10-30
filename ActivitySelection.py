n=int(input("Enter number of activities:"))
activities=[]
print("Enter start and finish time:")
for i in range(n):
    s, f = map(int,input(f"Activity {i+1}:").split())
    activities.append((s,f,i+1))
activities.sort(key=lambda x: x[1])
print("\nSelected Activities:")
last_finish = 0
for s,f,num in activities:
    if s >= last_finish:
        print("A"+str(num),end=" ")
        last_finish=f