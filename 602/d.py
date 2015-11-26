import math
c, q = list(map(lambda x:int(x), raw_input().split(' ')))

dp = [[] for _ in xrange(0, c)]
seq = list(map(lambda x: int(x), raw_input().split(' ')))

for i in xrange(0, len(seq)):
	for j in xrange(i, len(seq)):
		dp[i].append(math.ceil(abs(seq[i] - seq[j])/(j-i or 1)))

for j in xrange(0, q):
	sol = 0
	a,b = list(map(lambda x:int(x), raw_input().split(' ')))
	for x in xrange(a, b-1):
		for y in xrange(x+1, b):
			q,w = min(seq[x:y]), max(seq[x:y])
			sol += dp[q-1][w-1]

	print sol