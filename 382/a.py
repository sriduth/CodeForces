# Much effort -_- ahh
data = raw_input()

data = data.split("|")

weights = raw_input()

# Convert everything to lists
A = list(data[0])
B = list(data[1])
weights = list(weights)

# If we have to insert new elements before and after 
# the | delimiter
if len(A) != len(B):
	if len(A) > len(B):

		while len(A) > len(B) and weights:

			B.append(weights[0])
			del weights[0]

		if len(B) != len(A):

			print "Impossible\n"

		elif len(weights)%2 == 0:
			for i in range(0,len(weights)/2):
				A.append(weights[i])

			for i in range(len(weights)/2,len(weights))	:
				B.append(weights[i])

			print "".join(A)+"|"+"".join(B)

		else:
			print "Impossible\n"


	elif len(A) < len(B):

		#if abs(len(weights) - (len(A) + len(B)))%2 == 0:
		while len(B) > len(A) and weights:
			A.append(weights[0])
			del weights[0]

		if len(A) != len(B):
			print "Impossible\n"

		elif len(weights)%2 == 0:
			for i in range(0,len(weights)/2):
				A.append(weights[i])

			for i in range(len(weights)/2,len(weights)):
				B.append(weights[i])

			print "".join(A)+"|"+"".join(B)

		elif len(weights)%2 != 0:
			print "Impossible\n"
	

# If the partitions across | are equal, just insert the
# extra characters if the can be inserted
elif len(A) == len(B):

	if len(weights)%2 == 0:
		
		for i in range(0,len(weights)/2):
			A.append(weights[i])

		for i in range (len(weights)/2,len(weights)):
			B.append(weights[i])

		print "".join(A)+"|"+"".join(B)
	else:

		print "Impossible\n"

