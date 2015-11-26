num1, num2 = 0, 0
d, n = list(map(lambda x:int(x), raw_input().split(' ')))
digits = raw_input().split(' ')
for i in xrange(0, d):
	num1 += int(digits[d-1-i])*pow(n, i)

d, n = list(map(lambda x:int(x), raw_input().split(' ')))
digits = raw_input().split(' ')
for i in xrange(0, d):
	num2 += int(digits[d-1-i])*pow(n, i)

if num1 == num2:
	print '='
elif num1 > num2:
	print '>'
elif num2 > num1:
	print '<'