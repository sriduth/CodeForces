T = int(raw_input())

while T:

	expr = raw_input()
	if expr[0] == 'R':
		expr = expr.split("C")
		R = expr[0].split("R")
		R = int(R[1])
		L = int(expr[1])

		

	else:
		print "FPRM 2"