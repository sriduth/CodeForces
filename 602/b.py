elem = int(raw_input())
seq = list(map(lambda x:int(x), raw_input().split(' ')))

items = [set() for _ in seq]

for i in xrange(0, len(seq)):
	items[i].add(seq[:i])

print items

print length



