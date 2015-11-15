letters, replaces = map(lambda x : int(x), raw_input().split(' '))

sequence = raw_input()

data = {}

for i in xrange(0, len(sequence)):
	if sequence[i] not in data:
		data[sequence[i]] = []

	data[sequence[i]].append(i)

for i in xrange(0, replaces):
	s,t = raw_input().split(' ')

	if s in data and t in data:
		data[t], data[s] = data[s], data[t]
	elif s in data:
		data[t] = data[s]
		del data[s]
	elif t in data:
		data[s] = data[t]
		del data[t]


output = ['' for x in sequence]
for letter in data:
	for index in data[letter]:
		output[index] = letter

print ''.join(output)