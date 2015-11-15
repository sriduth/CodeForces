from fractions import gcd

t, a, b = list(map(lambda x: int(x), raw_input().split(' ')))
i = t

if a%b == 0:
	b = 1
elif b%a == 0:
	a = 1

while t%(a*b) != 0:
	t -= 1

ties = t/(a*b)
gc = gcd(ties, i)

print str(ties/gc)+'/'+str(i/gc)