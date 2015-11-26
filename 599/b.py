convert = lambda x: int(x)
m, n = list(map(convert, raw_input().split(' ')))
orig = set(map(convert, raw_input().split(' ')))
new = set(map(convert, raw_input().split(' ')))

if orig == new:
	print orig

