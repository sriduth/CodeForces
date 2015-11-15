l = int(input())
seq = list(map(lambda x: int(x), input().split(' ')))

val1 = 0

for i in range(0, l - 1):
    val1 = val1 + abs(seq[i] - seq[i+1])

val1 = val1 + abs(seq[0])

print(val1)