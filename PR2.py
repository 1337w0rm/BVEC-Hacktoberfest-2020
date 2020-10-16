import numpy as np

a = np.array([])
a = list(map(int, input().split()))

print(f"The inserted array is {a}")

count = 0

for i in range(len(a)):
    count+=a[i]

print(f"Sum of the array is {count}")